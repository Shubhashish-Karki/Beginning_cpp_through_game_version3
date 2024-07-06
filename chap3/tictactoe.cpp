#include<iostream>

using namespace std;

int main(){
    const int ROWS = 3;
    const int COLS = 3;
    char board[ROWS][COLS] = {
        {'O','X','O'},
        {'O','X','O'},
        {'O','X','O'}
    };

    cout << "Tic tac toe" << endl;

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
}