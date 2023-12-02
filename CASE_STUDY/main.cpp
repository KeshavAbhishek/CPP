#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define MAX_LINE_LENGTH 1000
#define MAX_LENGTH 1000

// Cancels the ticket if required.
int cancel_ticket(char passport[MAX_LENGTH]){
    int cancelled = 0;

    char tempArray[6][1000] = {};
    char tempPassenger[126][1000]={};

    ifstream loadFile("details.txt");

    char lines[MAX_LENGTH];
    int indexToCancel = -1;
    int index=0;

    while (loadFile.getline(lines, MAX_LENGTH))
    {
        strcpy(tempPassenger[index], lines);
        sscanf(lines, "%s %s %s %s %s %s", &tempArray[0], &tempArray[1], &tempArray[2], &tempArray[3], &tempArray[4], &tempArray[5]);

        if(strcmp(tempArray[0],passport)==0){
            indexToCancel = index;
            cancelled = 1;
        }

        index += 1;
    }

    loadFile.close();

    ofstream outputFile("details.txt");

    for (int position = 0; position < sizeof(tempPassenger)/sizeof(tempPassenger[0]); position++)
    {
        if(position != indexToCancel){
            outputFile << tempPassenger[position] << endl;
        }
    }
    
    outputFile.close();

    if(cancelled==1){
        cout << "Ticket cancelled successfully." << endl;
    }
    else{
        cout << "Ticket not found." << endl;
    }

    return 0;
}


// Selects seats at backend.
int seatSelector(){
    ifstream fileobject("seatControl.txt");

    char data[126][100]={};

    int pos = 0;

    while(fileobject.getline(data[pos], MAX_LINE_LENGTH)){
        pos += 1;
    }

    int count = pos;
    pos = 0;

    fileobject.close();

    cout << "Press :-" << endl << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i+1 << " :- " << data[i] << endl;
    }

    cout << endl << "Enter choice :- ";
    // int pos;
    cin >> pos;

    if(pos>126){
        cout << endl << "INVALID ENTRY" << endl << "\t... Program Exited..." << endl;
        exit(0);
    }
    return pos;
}


// Books ticket 
void book_ticket(){
    char detailsPrefix[6][MAX_LINE_LENGTH] = {"Passport","Name","Email","Boarding","Destination","Seat"};
    int i=0;

    char option;
    ofstream fileobject;

    fileobject.open("details.txt", ios::app);
    char passengerDetails[6][1000]={};

    while (i<5)
    {
        cout << detailsPrefix[i] << " :- ";
        cin.getline(passengerDetails[i], MAX_LENGTH);
        i+=1;
    }

    //

    char string[1000];
    strcpy(string, passengerDetails[1]);
    
    int ind = 0;
    while(string[ind]!='\0')
    {
        if(string[ind]==' ')
        {
            string[ind]='_';
        }
        ind++;
    }
    strcpy(passengerDetails[1], string);

    //

    i=0;
    int seat = seatSelector();

    char seatString[]="";
    char line[MAX_LINE_LENGTH];

    ifstream seatControl("seatControl.txt");

    char seatArray[126][5];

    int iterator = 0;
    while(seatControl.getline(line, MAX_LINE_LENGTH)){
        if(iterator==seat-1){
            strcpy(seatString, line);
            break;
        }
        iterator++;
    }

    seatControl.close();

    fileobject << passengerDetails[0] << " " << passengerDetails[1] << " " << passengerDetails[2] << " " << passengerDetails[3] << " " << passengerDetails[4] << " " << seatString;

    fileobject.close();


    cout << endl << "********************************************************************" << endl;
    cout << "\t\t\tWelcome to CGU Airlines" << endl;
    cout << "********************************************************************" << endl;
    cout << endl << "\tName :- " << passengerDetails[0] << endl << "\tPassport :- " << passengerDetails[1] << endl << "\tEmail :- " << passengerDetails[2] << endl << endl << "\tBording :- " << passengerDetails[3] << endl << "\tDestination :- " << passengerDetails[4] << endl << "\tSeat :- " << seatString << endl << endl << "\t\t\tThank You." << endl;
    cout << endl << "********************************************************************" << endl << endl;
}


// Show details of the customer
void show_details(){
    char detailsPrefix[6][MAX_LINE_LENGTH] = {"Passport","Name","Email","Boarding","Destination","Seat"};
    ifstream fileobject;
    fileobject.open("details.txt");
    cout << endl << "Details" << endl << endl;
    char line[MAX_LINE_LENGTH];
    char * linesData;
    int i=0;

    while(fileobject.getline(line, MAX_LINE_LENGTH)){
        linesData = strtok(line, " ");
        while(linesData != NULL){
            cout << detailsPrefix[i] << " :- " << linesData << endl;
            linesData = strtok(NULL, " ");
            i++;
        }
        i=0;
        cout << endl;
    }

    fileobject.close();
}


// The main runner function
int main(){
    char detailsPrefix[6][MAX_LINE_LENGTH] = {"Passport","Name","Email","Boarding","Destination","Seat"};
    int i=0;

    char option;
    
    do{
        cout << "********************************************************************" << endl;
        cout << "\t\t\tWelcome to CGU Airlines" << endl;
        cout << "********************************************************************" << endl << endl;
        cout << "1. Reservation" << endl;
        cout << "2. Cancel" << endl;
        cout << "3. Display Records" << endl;
        cout << "4. Exit" << endl;
    
        cout << endl << "Enter your choice :";
        cin >> option;
        system("cls");

        if(option=='1'){
            book_ticket();
        }

        if(option == '2'){
            char passport[MAX_LENGTH];
            cout << endl << "Enter your passport : ";
            cin >> passport;
            cancel_ticket(passport);
        }

        if(option=='3'){
            show_details();
        }

        if(option=='4'){
            cout << endl << "Thanks for using." << endl << endl << "\t... Exiting ..." << endl;
            exit(0);
        }
    }while(option!='4');

    return 0;
}
