// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;
int length(char input[]);
//function for reversing array
void reverse(char input[])
{
  for (int s = 0, e = length(input) - 1; s <= e; s++, e--)
  {
    swap(input[s], input[e]);
  }
}
//function for finding length of char array
int length(char input[])
{
  int len = 0;
  int i = 0;
  while (input[i] != '\0')
  {
    len++;
    i++;
  }
  return len;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  char name[100];
  cout << "Enter Your Name: " << endl;
  // cin.getline(name,100,'e');
  cin.getline(name, 100);
  cout << "Your Name is : " << name << endl;
  reverse(name);
  //lets call reverse function
  cout << "Reverse : " << name;
  cout << endl;
  return 0;
}
