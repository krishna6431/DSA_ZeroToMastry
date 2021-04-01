#include <time.h>
// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include "Dynamic-Array-Class.cpp"

int main()
{
  clock_t t_start = clock();
  DynamicArray d1; // default constructor called
  d1.add(10);
  d1.add(20);
  d1.add(30);
  d1.add(40);
  d1.add(50);
  d1.add(60);

  d1.print();
  cout << d1.getCapacity() << endl;

  // // copy constructor creates shallow copy
  // DynamicArray d2(d1); // copy constructor
  // d1.add(100, 0);
  // d1.print();
  // d2.print();
  // // lets copy element using copy assignment operator
  // // it also creates shallow copy
  // DynamicArray d3; // default constructor called
  // d3 = d1;
  // d1.print();
  // d2.print();
  // d3.print();

  // now we need to create our own copy constructor to create deep copy
  // after creating our own copy constructor
  DynamicArray d2(d1); // own copy constructor
  d1.print();
  d2.print();
  DynamicArray d3; // default constructor called
  d3 = d1;         // own copy assignment operator
  d1.add(100, 0);
  d1.print();
  d2.print();
  d3.print();

  DynamicArray d4(100); // parametrized constructor
  cout << d4.getCapacity() << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
