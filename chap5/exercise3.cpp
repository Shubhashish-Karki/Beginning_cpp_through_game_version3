#include<iostream>
#include<string>

using namespace std;

int askNumber(string prompt);
float askNumber();

int main(){

    cout << askNumber();
    cout << askNumber("Enter a integer: ");

}

int askNumber(string prompt ){
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

float askNumber(){
    float num;
    cout << "Enter a float: ";
    cin >> num;
    return num;
}