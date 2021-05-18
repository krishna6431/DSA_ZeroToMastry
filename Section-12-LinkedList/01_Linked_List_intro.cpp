// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // stactic alloaction
    Node n1(1); // if there is partameterised constructior then default constructor not work;
    Node n2(2);
    n1.next = &n2; // assigning address of node 2 to node 1;
    cout << n1.data << " " << n2.data << endl;
    Node *head = &n1;
    cout << "Head Data :" << head->data << endl;
    return 0;
}
