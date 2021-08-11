// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

void replaceChar(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == 'a')
    {
        input[0] = 'x';
    }
    replaceChar(input + 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    char input[100];
    cin >> input;
    cout << "Input\n";
    cout << input << endl;
    cout << "Output:\n";
    replaceChar(input);
    cout << input << endl;

    return 0;
}
