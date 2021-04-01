// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;

int DigitCount(int n)
{
  // base case // step 1
  if (n == 0)
  {
    return 0;
  }

  // recusive case // pmi case  // step 2
  int smallAnswer = DigitCount(n / 10);

  // calculation part  //step 3
  return smallAnswer + 1;
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
  cout << "No of Digits: ";
  cout << DigitCount(n);
  cout << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
