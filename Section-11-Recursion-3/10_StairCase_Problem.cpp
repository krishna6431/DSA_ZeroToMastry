// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int countWays(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    /*if(n==2){
    return 2;
   }
   */
    if (n < 0)
    {
        return 0;
    }
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
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
    cout << countWays(n) << endl;

    return 0;
}
