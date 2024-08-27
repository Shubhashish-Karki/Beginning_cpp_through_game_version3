#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//global constants
const char X ='X';
const char O ='O';
const char EMPTY =' ';
const char TIE ='T';
const char NO_ONE ='N';

//function prototypes
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0); 
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board, char human);
int computerMove(vector<char> board, char computer);
void announceWinner(char winner, char computer, char human);

int main(){
    int move;
    const int NUM_SQUARES =9;
    vector<char>board(NUM_SQUARES,EMPTY);

    instructions();
    char human = humanPiece();
    char computer =opponent(human);
    char turn = X;
    displayBoard(board);

    while(winner(board)==NO_ONE)
    {
        if (turn==human)
        {
            move = humanMove(board,human);
            board[move] = human;
        }
        else{
            move = computerMove(board,computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);
    }
    return 0;
}

void instructions(){
    cout << "Welcome to the ultimate man—machine showdown: Tic-Tac-Toe.\n";
    cout << "-- where human brain is pit against silicon processor\n\n";

    cout << "Make your move know by entering a number, 0-8. The number\n";
    cout << "corresponds to the desired board position, as illustrated:\n\n";

    cout << "       0 | 1 | 2\n";
    cout << "       ---------\n";
    cout << "       3 | 4 | 5\n";
    cout << "       ---------\n";
    cout << "       6 | 7 | 8\n\n";

    cout << "Prepare yourself, human. The battle is about to begin.\n\n";
}

char askYesNo(string question){
    char response;
    do
    {
        cout <<question << "(y/n): ";
        cin >> response;
    }while(response!= 'y' && response !='n');
}