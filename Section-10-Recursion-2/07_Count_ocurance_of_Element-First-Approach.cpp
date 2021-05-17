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
void count(int a[], int n, int x, int i, int &ans)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        ans++;
    }
    count(a, n, x, i + 1, ans);
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int a[] = {5, 5, 6, 5, 6, 7};
    /// printAllPos(a,6,10,0);
    int ans = 0;
    count(a, 6, 10, 0, ans);
    cout << ans << endl;
    return 0;
}
