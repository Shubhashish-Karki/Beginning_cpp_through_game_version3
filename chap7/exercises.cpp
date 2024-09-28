///// ex 1///
#include<iostream>
#include<string>

using namespace std;

int main(){
    // string d ="hello world";
    // string *str =&d;

    // cout <<str->size() << endl;
    int a = 10;
    int& b = a;
    int* c = &b;
    cout << &a << endl;
    cout << &b << endl;
    cout << &(*c) << endl;
}