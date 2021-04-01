// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;

// function for linear Search
int LinearSearch(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  clock_t t_start = clock();
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  cout << "Enter Size Of Array: " << endl;
  int n;
  cin >> n;
  int arr[n];
  cout << "Enter Elements of Array : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter Key to Search: " << endl;
  int key;
  cin >> key;

  int pos = LinearSearch(arr, n, key);

  if (pos == -1)
  {
    cout << "Key Not Found" << endl;
  }
  else
  {
    cout << "Key Found at Index " << pos << endl;
  }

  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
