// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;

// function for sorting array element using BubbleSort
void BubbleSort(int arr[], int n)
{
  for (int count = 1; count <= n - 1; count++)
  {
    int flag = 0;
    for (int j = 0; j <= n - 2; j++)
    {
      if (arr[j + 1] < arr[j])
      {
        swap(arr[j], arr[j + 1]);
        flag = 1;
      }
    }
    if (flag == 0)
      break;
  }
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

  cout << "Sorted Array: " << endl;

  BubbleSort(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
