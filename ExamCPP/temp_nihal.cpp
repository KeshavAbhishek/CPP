/*Write an Inheritance program that consists of one Base class Player' (having the attributes: Player _ name, Player_age, Country_name, nO_Of_matches_played). Create two derived class 'Batting' and 'Bowling' that derives the details of the 'Player' class by calling player_details() inside the Player class. Further, the Batting class consists of the attributes: and batting_avg. Similarly, the Bowling class consists of the attributes: and bowling_avg. Use batting_details() and bowling_details() for the Batting and Bowling classes respectively to display the info. Create another class Performance' that derives the details of both the Batting and Bowling class and also prints the Grade of the player inside player_grade() based on his/her batting and/or bowling performance.*/

#include<iostream>
using namespace std;
class player{
    public:
    char player_name[20];
    int player_age;
    char country_name[20];
    int no_of_match;
    void player_details(){
        cout<<"Enter Player Name: ";
        cin>>player_name;
        cout<<"Enter Player age: ";
        cin>>player_age;
        cout<<"Enter Player country: ";
        cin>>country_name;
    }
};
class batting: virtual public player{
    public:
    int batting_avg;
    // int no_of_match;
    int trun;
    void batting_details(){
        // player_details();
        cout<<"Enter No of Matches played: ";
        cin>>no_of_match;
        cout<<"Enter Total Runs : ";
        cin>>trun;
        batting_avg=(trun/no_of_match)*100;
    }
};

class bowling: virtual public player{
    public:
    int bowling_avg;
    int twt;
    void bowling_details(){
        // player_details();
        cout<<"Enter Total wickets taken: ";
        cin>>twt;
        bowling_avg=(twt/no_of_match)*100;
    }
};
class performance :public batting, public bowling{
    public:
    void performance_show(){
        cout<<"_________Player_details_______\n";
        cout<<"Player name is : "<<player_name<<endl;
    }
};

int main(){
    performance p1;
    p1.player_details();
    p1.batting_details();
    p1.bowling_details();
    p1.performance_show();
}