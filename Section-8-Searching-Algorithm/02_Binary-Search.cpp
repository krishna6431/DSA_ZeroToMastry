// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <algorithm>
#include <iostream>
#include <time.h>
using namespace std;

// function for linear Search
int BinarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    // int mid = (start + end)/2;
    // more optimize way to find mid
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
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
  sort(arr, arr + n); // binary search work only for sorted array
  int pos = BinarySearch(arr, n, key);

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
