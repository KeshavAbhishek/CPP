#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
#include <strings.h>

using namespace std;

const char* HOST = "localhost";
const char* USER = "root";
const char* PASSW = "2023";
const char* DB = "airline";

int main() {
	
	MYSQL* 	conn;
	conn = mysql_init(NULL);

	if(!mysql_real_connect(conn,HOST, USER, PASSW, DB,3306, NULL,0)){
		cout<<mysql_error(conn);	
	}

	else{
	
		cout<<"Logged in..."<<endl<<endl;
		Sleep(2000);
	}

	char prefix = 'A';
	string seatNumber;
	string temp;

	bool exit= false;
	while(!exit){
		// cout<<"1. Insert Data: "<<endl;
		// cout<<"0. Exit"<<endl;
		// cout<<"Enter value: ";
		// cin>>val;
			
		// if(val==1){
		// string id;	
		
		// 	cout<<"Enter SEAT No.: ";
		// 	cin>>id;
		
		// 	string query = "INSERT INTO seatcontrol (seatN) VALUES('"+id+"')";
		// 	if(mysql_query(conn,query.c_str())){
		// 		cout<<mysql_error(conn)<<endl;
		// 	}
		// 	else{
		// 		cout<<"Data inserted: "<<endl<<endl;
		// 	}
		// 	Sleep(2000);
		// }
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 21; j++)
			{
				temp = (i+1)+"0";
				seatNumber = seatNumber + prefix + "-" + temp;
				printf("%s", seatNumber);
				seatNumber="";
			}
			prefix++;
		}
		
	}
	mysql_close(conn);

	return 0;
}
