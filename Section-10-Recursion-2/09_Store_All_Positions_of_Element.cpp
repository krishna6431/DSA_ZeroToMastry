// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <vector>
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

void saveAllPos(int a[], int n, int x, int i, vector<int> &ans)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        ans.push_back(i);
    }
    saveAllPos(a, n, x, i + 1, ans);
}

int saveAllPosUsingArray(int a[], int n, int x, int i, int out[], int j)
{
    if (i == n)
    {
        return 0;
    }
    if (a[i] == x)
    {
        out[j] = i;
        return 1 + saveAllPosUsingArray(a, n, x, i + 1, out, j + 1);
    }
    return 0 + saveAllPosUsingArray(a, n, x, i + 1, out, j);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int a[] = {5, 5, 6, 5, 6, 7};
    /// printAllPos(a,6,10,0);
    vector<int> v;
    saveAllPos(a, 6, 10, 0, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int output[10];
    int count = saveAllPosUsingArray(a, 6, 10, 0, output, 0);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}
