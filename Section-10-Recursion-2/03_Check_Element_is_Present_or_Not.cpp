// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

bool isPresent(int arr[], int n, int x)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == x)
    {
        return true;
    }
    else
    {
        return isPresent(arr + 1, n - 1, x);
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int a[] = {1, 2, 3, 4, 5};
    if (isPresent(a, 5, 4))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    if (isPresent(a, 5, 6))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    return 0;
}
