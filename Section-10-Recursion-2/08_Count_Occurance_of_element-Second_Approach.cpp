// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

void printAllPos(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        cout << i << " ";
    }
    printAllPos(a, n, x, i + 1);
}

int count(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return 0;
    }
    if (a[i] == x)
    {
        return 1 + count(a, n, x, i + 1);
    }
    else
    {
        return count(a, n, x, i + 1);
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int a[] = {5, 5, 6, 5, 6, 7};
    /// printAllPos(a,6,10,0);

    cout << count(a, 6, 7, 0) << endl;

    return 0;
}
