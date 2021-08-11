// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

void removeA(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] != 'a')
    {
        removeA(input + 1);
    }
    else
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            input[i] = input[i + 1];
        }
        removeA(input);
    }
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
    removeA(input);
    cout << input << endl;

    return 0;
}
