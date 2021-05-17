// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

bool checkPal(int a[], int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (a[s] == a[e])
    {
        return checkPal(a, s + 1, e - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int a[] = {1, 2, 3, 4, 3, 2, 1};
    cout << checkPal(a, 0, 6);
    return 0;
}
