// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

// Node Class
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

// taking Input from user
Node *takingInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        //creating Linked List
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n; // inserting at tail
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

//printing linked list
void printList(Node *head) //pass by value // pass by ref : Node *&head
{

    //Avoid Writing Like This
    // while (head != NULL)
    // {
    //     cout << head->data << "->";
    //     head = head->next;
    // }
    // cout << endl;

    Node *temp = head; // proper way
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "NULL" << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // stactic alloaction
    // Node n1(1); // if there is partameterised constructior then default constructor not work;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // Node *head = &n1;
    // n1.next = &n2; // assigning address of node 2 to node 1;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // n5.next = NULL;

    Node *head = takingInput();
    printList(head);

    //Dynamically Creating Node
    // Node *n1 = new Node(1);
    // Node *n2 = new Node(2);
    // cout << n1.data << " " << n2.data << endl;
    // Node *head = &n1;
    // cout << "Head Data :" << head->data << endl;

    return 0;
}
