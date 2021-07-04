// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

class stack
{
    int *arr;
    int nextIndex;
    int capacity;

public:
    stack() //default constructor
    {
        arr = new int[4];
        nextIndex = 0;
        int capacity = 4;
    }

    stack(int cap) //parametarised constructor
    {
        arr = new int[cap];
        nextIndex = 0;
        capacity = cap;
    }

    //return no of element present in the stack
    int size()
    {
        return nextIndex;
    }
    //return true if stack is empty
    bool isEmpty()
    {
        // if (nextIndex == 0)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        return nextIndex == 0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[nextIndex] = element;
        nextIndex++;
    }

    void pop()
    {
        if (nextIndex == 0)
        {
            cout << "Stack UnderFlow" << endl;
            return;
        }
        nextIndex--;
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        return arr[nextIndex - 1];
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    //created stack of size 4
    stack s(4);
    cout << "Pushing Element" << endl;
    s.push(10);
    cout << "Pushing Element" << endl;
    s.push(20);
    cout << "Pushing Element" << endl;
    s.push(30);
    cout << "Pushing Element" << endl;
    s.push(40);
    cout << "Pushing Element" << endl;
    s.push(50);

    cout << "TopElement: ";
    cout << s.top() << endl;
    cout << "Poped Element" << endl;
    s.pop();
    cout << "TopElement: ";
    cout << s.top() << endl;
    cout << "Poped Element" << endl;
    s.pop();
    cout << "TopElement: ";
    cout << s.top() << endl;
    cout << "Poped Element" << endl;
    s.pop();

    cout << "Size: " << s.size() << endl;
    cout << "isEmpty: " << s.isEmpty() << endl;

    return 0;
}
