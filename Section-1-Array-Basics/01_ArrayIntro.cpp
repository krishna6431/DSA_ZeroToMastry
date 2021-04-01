//All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

int main()
{
    /*int a[10];
   a[0] = 2;
   a[4] = 5;

   cout<<a[0]<<" "<<a[4]<<endl;
   */

    /*int a[10] = {0};         /// Initialisation
   /// cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;   ///printing values

   for(int i=0;i<10;i++){
    cout<<a[i]<<" ";
   }*/

    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = i * i;
        cout << a[i] << " ";
    }
    cout << endl;

    //int b;
    //cout<<sizeof(b)<<endl;

    int d[10] = {1, 2, 3};
    cout << sizeof(d);
}
