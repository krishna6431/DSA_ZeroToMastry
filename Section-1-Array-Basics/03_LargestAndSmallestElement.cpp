// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int mini = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    cout << "Array Elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Largest Element: " << largest << endl;
    cout << "Minimul Element: " << mini << endl;

    return 0;
}
