// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

double GeometricSum(int n)
{
  // base case // step 1
  if (n == 1)
  {
    return 1;
  }

  // recusive case // pmi case  // step 2
  double smallAnswer = GeometricSum(n - 1);

  // calculation part  //step 3
  return smallAnswer + 1.0 / pow(2, n);
}

int main()
{
  clock_t t_start = clock();
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  cout << GeometricSum(n);
  cout << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
