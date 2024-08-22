#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cctype>

using namespace std;

int main(){
    const int MAX_WRONG = 8; // max no of guesses

    vector<string> words;
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(),words.end());

    const string THE_WORD = words[0];  //guess the word
    int wrong = 0;
    string soFar(THE_WORD.size(),'-'); // words guessed so far
    string used =""; //already used letters

    cout <<"Welcom to Hangman" << endl;

    while((wrong < MAX_WRONG ) && soFar!= THE_WORD){
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
        cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;

        //get player guess
        char guess;
        cout<<"\n\n Enter your guess: ";
        cin >> guess;
        guess =toupper(guess);
        //ask for another guess till already made guess

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess; //add the guess letter to used string                

        if (THE_WORD.find(guess) != string::npos)
        {

            cout << guess << " is in the word " << endl;
        
            for(int i = 0; i < THE_WORD.length(); ++i)
            {
                if (THE_WORD[i] == guess)
                {
                    soFar[i] = guess;
                }
            }
        }
        else
        {
            cout <<"Sorry, " <<guess << " is not in the word " << endl;
            ++wrong;
        }
      
    }
    if (wrong == MAX_WRONG)
        {
            cout << "\n You've been hanged!";
        }
    else
        {
            cout <<"You have won!";
        }
    cout << "\n The word was " << THE_WORD << endl;
    return 0;

}