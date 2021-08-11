// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

void print(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    cout << input[0];
    print(input + 1);
}

void revPrint(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    revPrint(input + 1);
    cout << input[0];
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char input[] = "abc";
    cout << "Output: ";
    print(input);
    cout << endl;
    cout << "Output: ";
    revPrint(input);
    return 0;
}
