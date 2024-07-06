#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    int secret_number = rand() % 100 +1; // generate up to 100
    int tries = 0;
    int guess;

    cout << "\tWelcome to Guess my Number game!\n\n";

    do
    {
       cout << "Enter a guess: ";
       cin >> guess;
       ++tries;
       
       if (guess == secret_number){
            cout << "\nRight. You got  it in " << tries << " guesses!\n";
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