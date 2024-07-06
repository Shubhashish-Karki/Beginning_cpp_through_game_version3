#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0))); //seed random number generator
    int randomNumber=rand();

    int die = (randomNumber % 6 ) +1;
    cout << "You rolled a number " << die << endl;

    return 0;

}