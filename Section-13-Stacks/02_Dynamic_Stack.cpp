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
        capacity = 4;
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
            int *newArr = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            capacity = 2 * capacity;
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

    int cap()
    {
        return this->capacity;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    //created stack of size 4
    stack s;
    cout << "Capacity : " << s.size() << endl;
    cout << "Pushing Element" << endl;
    s.push(10);
    cout << "Pushing Element" << endl;
    s.push(20);
    cout << "Pushing Element" << endl;
    s.push(30);
    cout << "Pushing Element" << endl;
    s.push(40);
    cout << "Capacity: " << s.size() << endl;
    cout << "Pushing Element" << endl;
    s.push(50);
    cout << "Capacity : " << s.cap() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "isEmpty: " << s.isEmpty() << endl;

    return 0;
}
