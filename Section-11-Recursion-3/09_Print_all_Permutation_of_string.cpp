// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

void printPermu(char str[], int i = 0)
{
    if (str[i] == '\0')
    {
        cout << str << endl;
        return;
    }
    for (int j = i; str[j] != '\0'; j++)
    {
        swap(str[i], str[j]);
        printPermu(str, i + 1);
        swap(str[i], str[j]);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    cout << "Input: \n";
    char str[10];
    cin >> str;
    cout << "Output: \n";
    printPermu(str);
    return 0;
}
