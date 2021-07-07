// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T> // this should be at above every class name
class Stack
{
    Node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void push(T ele)
    {
        Node<T> *n = new Node<T>(ele);
        n->next = head;
        head = n;
        size++;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack empty" << endl;
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "Stack empty" << endl;
            return 0;
        }
        return head->data;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    Stack<int> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    s.pop();

    cout << "Size: " << s.getSize() << endl;
    cout << "isEmpty: " << s.isEmpty() << endl;
    return 0;
}
