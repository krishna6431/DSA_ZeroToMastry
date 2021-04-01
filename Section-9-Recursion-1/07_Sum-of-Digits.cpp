// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;

int DigitSum(int n)
{
  // base case // step 1
  if (n == 0)
  {
    return 0;
  }

  // recusive case // pmi case  // step 2
  int smallAnswer = DigitSum(n / 10);

  // calculation part  //step 3
  return smallAnswer + n % 10;
}

int main()
{
  clock_t t_start = clock();
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  cout << "Enter the Value of N: " << endl;
  int n;
  cin >> n;
  cout << "Sum of Digits: ";
  cout << DigitSum(n);
  cout << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
