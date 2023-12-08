#include <iostream>
using namespace std;

class Player{
    public:
        string Player_name;
        int Player_age;
        string Country_name;
        int no_of_matches_played;
        
        void player_details(){
            cout << "Enter player name : ";
            cin >> Player_name;
            cout << "Enter country name : ";
            cin >> Country_name;
            cout << "Enter player age : ";
            cin >> Player_age;
            cout << "Enter no. of matches played : ";
            cin >> no_of_matches_played;
        }
};

class Batting : public Player{
    public:
        int no_of_runs;
        int batting_avg;

        void batting_details(){
            player_details();
            cout << "No. of runs scored : ";cin>>no_of_runs;
            cout << "Batting avg : ";cin>>batting_avg;
        }
};

class Bowling : public Player{
    public:
        int no_of_wickets;
        int bowling_avg;

        void bowling_details(){
            player_details();
            cout << "No. of wickets taken : ";cin>>no_of_wickets;
            cout << "Bowling avg : ";cin>>bowling_avg;
        }
};

class Performance : public Batting, public Bowling{
    public:
        Performance(int n){
            if(n==1){
                batting_details();
                if(batting_avg>50){
                    cout << "Grade A\n";
                }
                if(batting_avg<50){
                    cout << "Grade B\n";
                }
            }
            if(n==2){
                bowling_details();
                if(bowling_avg>50){
                    cout << "Grade A\n";
                }
                if(bowling_avg<50){
                    cout << "Grade B\n";
                }
            }
            if(n!=1 && n!=2){
                cout << "INVALID !";
                exit(0);
            }
        }
};

int main(){
    int n;
    cout << "1. Batting\n2. Bowling\nEnter Choice : ";cin>>n;
    Performance P(n);
    return 0;
}