// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  cout << "Enter Your Name: " << endl;
  char name[100];
  cin.getline(name, 100);
  cout << "Your Name is: " << name << endl;
  cout << "Prefixes are: " << endl;

  //simple implementation problem
  for (int e = 0; name[e] != '\0'; e++)
  {
    for (int s = 0; s <= e; s++)
    {
      cout << name[s];
    }
    cout << endl;
  }

  return 0;
}
