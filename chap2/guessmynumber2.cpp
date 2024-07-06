#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    int secret_number; // generate up to 100
    int upper_bound = 100;
    int lower_bound = 1;
    int tries = 0;
    int guess = rand() % 100 + 1;

    cout << "\tWelcome to I will Guess your Number game!\n\n";

    cout << "Enter a number: ";
    cin >> secret_number;

    do
    {
        guess = (rand() % upper_bound) + 1;
        cout << guess << endl;
       ++tries;
       if(guess > secret_number) {
            cout <<"Too high!\n\n";
            upper_bound = guess;
            // guess = rand() % upper_bound; //random number will be less than previous guess

            // if (guess == secret_number){
            //     cout << "\nRight. I got  it in " << tries << " guesses!\n";
            // }

       }

       else if (guess < secret_number){
            // guess = (rand() % (upper_bound - lower_bound )) + (lower_bound + 1) ; //random number
            cout <<"Too low!\n\n";
            lower_bound = guess;
            //  if (guess == secret_number){
            //     cout << "\nRight. I got  it in " << tries << " guesses!\n";
            // }
       }
       else{
            cout << "\nRight. I got  it in " << tries << " guesses!\n";
       }

    } while (guess != secret_number);
    
    return 0;
}