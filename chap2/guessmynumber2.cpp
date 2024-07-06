#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    int secret_number; // generate up to 100
    int tries = 0;
    int guess;

    cout << "\tWelcome to I will Guess your Number game!\n\n";

    cout << "Enter a number: ";
    cin >> secret_number;

    do
    {
        guess = rand() % 100 + 1;
       ++tries;
       
       if (guess == secret_number){
            cout << "\nRight. I got  it in " << tries << " guesses!\n";
       }

       else if(guess > secret_number) {
            cout <<"Too high!\n\n";

       }
       else{
            cout <<"Too low!\n\n";
       }
    } while (guess != secret_number);
    
    return 0;
}