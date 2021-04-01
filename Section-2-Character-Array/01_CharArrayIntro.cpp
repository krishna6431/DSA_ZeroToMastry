// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char name[100];
    cout << "Enter Your Name: " << endl;
    cin >> name;

    // it will stored in memory like this
    // K r i s h n a \0
    // if i change 9 position to x then what happend
    // lets check it

    name[8] = 'x';
    cout << "Your Name is: " << name << endl;

    // again same output
    // K r i s h n a \0 x
    // it terminates when encounters \0 character

    // but what if i change name[4]='n'
    // lets check it

    name[4] = 'n';
    cout << "Your Name is: " << name << endl;

    // this time it will be stored
    // K r i s n n a \0 x

    //note - cout will print characters untill it encounter \0 character
    //note- cin will automatically append \0 after taking input from user when user presses enter key or spaces
    return 0;
}
