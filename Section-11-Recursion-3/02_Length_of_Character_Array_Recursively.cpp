// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int len(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }
    return 1 + len(input + 1);
    ;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char input[100];
    cout << "Input: ";
    cin >> input;
    int l = len(input);
    cout << "Length is: ";
    cout << l << endl;
    return 0;
}
