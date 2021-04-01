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

  int a, b;
  cin >> a >> b;

  cout << "Before Swapping: "
       << "a: " << a << endl;

  cout << "b: " << b << endl;

  //    using temporary variable:
  //    int temp=a;
  //    a=b;
  //    b=temp;

  swap(a, b);
  cout << "Before Swapping: "
       << "a: " << a << endl;
  cout << "b: " << b << endl;
  return 0;
}
