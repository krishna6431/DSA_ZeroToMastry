// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int length(char input[])
{
    if (input[0] == '\0')
    {
        return 0;
    }
    return 1 + length(input + 1);
    ;
}

int convertStringToInt(char str[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smallAns = convertStringToInt(str, n - 1);
    int lastDigit = str[n - 1] - '0';
    int ans = smallAns * 10 + lastDigit;
    return ans;
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
    int n = length(str);
    cout << "Output: \n";
    int a = convertStringToInt(str, n);
    cout << a << endl;

    return 0;
}
