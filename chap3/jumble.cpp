#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>
#include<ctime>

using namespace std;

int main(){
    enum fields {WORD,HINT,NUM_FIELDS};
    const int NUM_WORDS = 5;
    int scores = 0;

    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
     };

    srand(static_cast<unsigned int>(time(0)));

    int choice = rand() % NUM_WORDS;
    string theWord = WORDS[choice][WORD];  //guess word
    string theHint = WORDS[choice][HINT]; //hint for words

    //create jumble words
    string jumble = theWord;

    int length = jumble.size();

    for(int i = 0; i < length; i++){
        int index1 = rand() % length;
        cout <<"index1"<< index1 <<endl;
        int index2 = rand() % length;

        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while((guess != theWord) && (guess!="quit")){

        if (guess == "hint"){
            cout << theHint;
            scores--;
        }
        else{
            cout <<"Sorry, that's not it.";
            scores--;
        }

        cout<<"\n\nYour guess: ";
        cin >> guess;    

        if(guess == theWord){
            cout<<"Thats it!"<<endl;
            scores += theWord.size();
        }
    }   
    cout <<"\nThanks for playing.\n";
    cout<<"Your score: "<<scores<<endl;
    return 0;
    
}