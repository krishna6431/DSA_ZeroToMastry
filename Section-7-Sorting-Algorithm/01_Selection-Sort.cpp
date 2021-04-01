// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;

// function for sorting array element using selection sort
void SelectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
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

  SelectionSort(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
