// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int toh(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return toh(n - 1) + 1 + toh(n - 1);
}

void printSteps(int n, char s, char d, char h)
{
    if (n == 0)
    {
        return;
    }
    printSteps(n - 1, s, h, d);
    cout << "Moving disk " << n << " from " << s << " to " << d << endl;
    printSteps(n - 1, h, d, s);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    cout << "Input: \n";
    int n;
    cin >> n;
    cout << "Output: \n";
    cout << toh(n) << endl;
    printSteps(n, 'A', 'C', 'B');

    return 0;
}
