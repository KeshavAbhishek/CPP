#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
using namespace std;

const char *HOST = "localhost";
const char *USER = "root";
const char *PASSW = "2023";
const char *DB = "airline";
string query, queryStore;

string seatArray[126] = {
	"A-1","A-2", "A-3", "A-4", "A-5", "A-6", "A-7", "A-8",
	"A-9", "A-10", "A-11", "A-12", "A-13", "A-14", "A-15",
	"A-16", "A-17", "A-18", "A-19", "A-20", "A-21", "B-1",
	"B-2", "B-3", "B-4", "B-5", "B-6", "B-7", "B-8", "B-9",
	"B-10", "B-11", "B-12", "B-13", "B-14", "B-15", "B-16",
	"B-17", "B-18", "B-19", "B-20", "B-21", "C-1", "C-2",
	"C-3","C-4", "C-5", "C-6", "C-7", "C-8", "C-9", "C-10",
	"C-11", "C-12", "C-13", "C-14", "C-15", "C-16", "C-17",
	"C-18", "C-19", "C-20", "C-21", "D-1", "D-2", "D-3", "D-4",
	"D-5", "D-6", "D-7", "D-8", "D-9", "D-10", "D-11", "D-12",
	"D-13", "D-14", "D-15", "D-16", "D-17", "D-18", "D-19",
	"D-20", "D-21", "E-1", "E-2", "E-3", "E-4", "E-5", "E-6",
	"E-7", "E-8", "E-9", "E-10", "E-11", "E-12", "E-13", "E-14",
	"E-15", "E-16", "E-17", "E-18", "E-19", "E-20", "E-21", "F-1",
	"F-2", "F-3", "F-4", "F-5", "F-6", "F-7", "F-8", "F-9", "F-10",
	"F-11", "F-12", "F-13", "F-14", "F-15", "F-16", "F-17", "F-18",
	"F-19", "F-20", "F-21"};

string prefix[6] = {"Seat:- ", "Name:- ", "Age:- ", "Email:- ", "Boarding Airport:- ", "Destination Airport:- "};

class customer
{
public:
	string seat;
	string name;
	string age;
	string email;
	customer()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout << "Enter Age : ";
		cin >> age;
		cout << "Enter Email : ";
		cin >> email;
		cout << "\n\nChoose Seat :-\n\n";
		for (int i = 0; i < 126; i++)
		{
			cout << i + 1 << ". " << seatArray[i] << endl;
		}
		int opt;
		while (opt>=1 && opt<=5)
		{
			cout << "\nSelect Option [1-126]: ";
			cin >> opt;
			if ((opt >= 1 && opt <= 126))
			{
				break;
			}
			else
			{
				cout << "Try again...";
			}
		}
		seat = seatArray[opt - 1];
	}
};

class airports
{
	public:
		string sourcefrom;
		string sourceto;
	
		airports()
		{
			cout << "Enter Boarding Airport : ";
			cin >> sourcefrom;
			cout << "Enter Destination Airport : ";
			cin >> sourceto;
		}
};

class bookTicket : public customer, airports
{
public:
	bookTicket(){}

	string returnData()
	{
		return "INSERT INTO customer VALUES('" + seat + "', '" + name + "', '" + age + "', '" + email + "', '" + sourcefrom + "', '" + sourceto + "')";
	}
};

int main()
{
	MYSQL *conn;
	conn = mysql_init(NULL);

	if (!mysql_real_connect(conn, HOST, USER, PASSW, DB, 3306, NULL, 0))
	{
		cout << mysql_error(conn);
	}

	else
	{
		cout << "\nLogged in..." << endl
			 << endl;
		Sleep(2000);
	}
	system("cls");

	int choice;
	cout << "\n\nAirline Management System\n1. Book Ticket\n2. Update Ticket\n3. Delete Ticket\n4. View Ticket\n5. Exit\n\nChoose Option : ";
	cin >> choice;
	while (choice>=1 && choice <=5)
	{
		if (choice == 1)
		{

			bookTicket BT;
			query = BT.returnData();

			if (mysql_query(conn, query.c_str()))
			{
				// cout<<mysql_error(conn)<<endl;
				cout << "\nSeat Already Booked.\n";
			}
			else
			{
				cout << "Seat Booked Successfully." << endl
					 << endl;
				
				query = "select * from customer where seat='" + BT.seat + "'";
				if (mysql_query(conn, query.c_str()))
				{
					cout << mysql_error(conn) << endl;
				}
				else
				{
					MYSQL_RES *result = mysql_store_result(conn);
					if (result)
					{
						int num = mysql_num_fields(result);
					}
					MYSQL_ROW row;
					// while(row=mysql_fetch_row(result))
					row = mysql_fetch_row(result);
					for (int i = 0; i < 6; i++)
					{
						cout << prefix[i] << row[i] << endl;
					}
				}

				Sleep(2000);
			}
		}
		if (choice == 2)
		{
			int updateChoice;
			string Fseat, Fseat2="";

			cout << "Details to be updated\n1. Name\n2. Age\n3. Email\n4. Seat\n5. Source Airport\n6. Destination Airport\n\nEnter choice : ";
			cin >> updateChoice;

			cout << "\nEnter Seat:- ";
			cin >> Fseat;

			query = "select * from customer where seat='" + Fseat + "'";
			if (mysql_query(conn, query.c_str()))
			{
				cout << mysql_error(conn) << endl;
			}
			else{
				MYSQL_RES *result = mysql_store_result(conn);
				MYSQL_ROW row;
				while (row = mysql_fetch_row(result))
				{

					for (int i = 0; i < 6; i++)
					{
						if(row[i]==Fseat){
							Fseat2=Fseat;
						}
					}
				}

				if(Fseat2!=""){

					if (updateChoice == 1)
					{

						string nameU;
						cout << "Enter Name:- ";
						cin >> nameU;
						query = "update customer set name='" + nameU + "' where seat='" + Fseat + "'";
						if (mysql_query(conn, query.c_str()))
						{
							cout << mysql_error(conn) << endl;
						}
						else
						{
							cout << "Data Updated successfully." << endl
									<< endl;
						}
					}

					if (updateChoice == 2)
					{

						string ageU;
						cout << "Enter Age:- ";
						cin >> ageU;
						query = "update customer set age='" + ageU + "' where seat='" + Fseat + "'";
						if (mysql_query(conn, query.c_str()))
						{
							cout << mysql_error(conn) << endl;
						}
						else
						{
							cout << "Data Updated successfully." << endl
									<< endl;
						}
					}

					if (updateChoice == 3)
					{

						string emailU;
						cout << "Enter Email:- ";
						cin >> emailU;
						query = "update customer set email='" + emailU + "' where seat='" + Fseat + "'";
						if (mysql_query(conn, query.c_str()))
						{
							cout << mysql_error(conn) << endl;

						}
						else
						{
							cout << "Data Updated successfully." << endl
									<< endl;
						}
					}

					if (updateChoice == 4)
					{

						string seatNew;
						// cout << "Enter Seat:- ";
						cout << "\n\nChoose Seat :-\n\n";
						for (int i = 0; i < 126; i++)
						{
							cout << i + 1 << ". " << seatArray[i] << endl;
						}
						int opt;
						while (1)
						{
							cout << "\nSelect Option [1-126]: ";
							cin >> opt;
							if ((opt >= 1 && opt <= 126))
							{
								break;
							}
							else
							{
								cout << "Try again...";
							}
						}
						seatNew = seatArray[opt - 1];
						query = "update customer set seat='" + seatNew + "' where seat='" + Fseat + "'";
						if (mysql_query(conn, query.c_str()))
						{
							// cout<<mysql_error(conn)<<endl;
							cout << "\nSeat Already Alloted to Other.\n";
						}
						else
						{
							cout << "Data Updated successfully." << endl
									<< endl;
						}
					}

					if (updateChoice == 5)
					{

						string srcfromU;
						cout << "Enter Boarding Airport:- ";
						cin >> srcfromU;
						query = "update customer set srcfrom='" + srcfromU + "' where seat='" + Fseat + "'";
						if (mysql_query(conn, query.c_str()))
						{
							cout << mysql_error(conn) << endl;
						}
						else
						{
							cout << "Data Updated successfully." << endl
									<< endl;
						}
					}

					if (updateChoice == 6)
					{

						string srctoU;
						cout << "Enter Destination Airport:- ";
						cin >> srctoU;
						query = "update customer set srcto='" + srctoU + "' where seat='" + Fseat + "'";
						if (mysql_query(conn, query.c_str()))
						{
							cout << mysql_error(conn) << endl;
						}
						else
						{
							cout << "Data Updated successfully." << endl
									<< endl;
						}
					}
				}
				else{
					cout << "Booking Not Found" << endl;
				}
			}
		}

		if (choice == 3)
		{
			int index = 0;
			cout << "Seats Booked : \n\n";
			query = "select * from customer";
			if (mysql_query(conn, query.c_str()))
			{
				cout << mysql_error(conn) << endl;
			}
			else
			{
				cout << endl
						<< endl;
				MYSQL_RES *result = mysql_store_result(conn);
				if (result)
				{
					int num = mysql_num_fields(result);
				}
				MYSQL_ROW row;
				while (row = mysql_fetch_row(result))
				{
					cout << index+1 << " : " << row[0] << endl;
					index++;
				}
			}
			// <-->

			string Fseat;
			cout << "\n\nEnter Seat:- ";
			cin >> Fseat;
			query = "select * from customer where seat='" + Fseat + "'";
			if (mysql_query(conn, query.c_str()))
			{
				cout << mysql_error(conn) << endl;
			}
			else
			{
				MYSQL_RES *result = mysql_store_result(conn);
				if (result)
				{
					int num = mysql_num_fields(result);
				}
				MYSQL_ROW row;
				// while(row=mysql_fetch_row(result))
				row = mysql_fetch_row(result);
				for (int i = 0; i < 6; i++)
				{
					cout << prefix[i] << row[i] << endl;
				}

				cout << endl;
				query = "delete from customer where seat='" + Fseat + "'";
				if (mysql_query(conn, query.c_str()))
				{
					cout << mysql_error(conn) << endl;
				}
				else
				{
					cout << "Data Deleted successfully." << endl
							<< endl;
				}
			}
		}

		if (choice == 4)
		{
			
			query = "select * from customer";
			if (mysql_query(conn, query.c_str()))
			{
				cout << mysql_error(conn) << endl;
			}
			else
			{
				cout << endl
						<< endl;
				MYSQL_RES *result = mysql_store_result(conn);
				if (result)
				{
					int num = mysql_num_fields(result);
				}
				MYSQL_ROW row;
				while (row = mysql_fetch_row(result))
				{
					for (int i = 0; i < 6; i++)
					{
						cout << prefix[i] << row[i] << endl;
					}
					cout << endl;
				}
			}
		}

		if (choice == 5)
		{
			cout << "Exiting...\nThanks.";
			exit(0);
		}
		cout << "\n\nAirline Management System\n1. Book Ticket\n2. Update Ticket\n3. Delete Ticket\n4. View Ticket\n5. Exit\n\nChoose Option : ";
		cin >> choice;
	}
	mysql_close(conn);
	return 0;
}
