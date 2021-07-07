// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;
template <typename T>
class stack
{
    T *arr;
    int nextIndex;
    int capacity;

public:
    stack() //default constructor
    {
        arr = new T[4];
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

    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newArr = new T[2 * capacity];
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

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return 0;
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
    stack<char> s;
    cout << "Capacity : " << s.size() << endl;
    cout << "Pushing Element" << endl;
    s.push(100);
    cout << "Pushing Element" << endl;
    s.push(101);
    cout << "Pushing Element" << endl;
    s.push(102);
    cout << "Pushing Element" << endl;
    s.push(103);
    cout << "Capacity: " << s.size() << endl;
    cout << "Pushing Element" << endl;
    s.push(104);
    cout << "Capacity : " << s.cap() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "isEmpty: " << s.isEmpty() << endl;
    cout << "Top Element: " << s.top() << endl;

    return 0;
}
