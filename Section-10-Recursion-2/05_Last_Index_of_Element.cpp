// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int firstIndex(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return -1;
    }
    if (a[i] == x)
    {
        return i;
    }
    return firstIndex(a, n, x, i + 1);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif
    int a[] = {1, 4, 3, 4, 4};
    cout << "Index: ";
    cout << firstIndex(a, 5, 3, 0);
    cout << endl;
    return 0;
}
