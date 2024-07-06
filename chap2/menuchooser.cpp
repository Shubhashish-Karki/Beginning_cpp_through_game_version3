//Menu chooser
#include<iostream>
using namespace std;

int main(){
    cout << "Difficulty Levels\n\n";
    cout << "1-Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";

    int choice;

    ///For  exercise
    enum difficulty{EASY = 1 ,NORMAL,HARD};

    cin >> choice;

    switch(choice){
        case EASY:
            cout << "You picked easy\n";
            break;
        case NORMAL:
            cout << "You picked normal\n";
            break;
        case HARD:
            cout << "You picked hard\n";
            break;
        default:
            cout << "You made an illegal choice\n";
    }
    return 0;
}