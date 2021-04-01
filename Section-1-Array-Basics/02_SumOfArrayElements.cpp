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

   int total = 0;
   for (int i = 0; i < 10; i++)
   {
      total += arr[i];
   }
   cout << "Array Elements are: ";
   for (int i = 0; i < 10; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
   cout << "Sum: " << total << endl;

   return 0;
}
