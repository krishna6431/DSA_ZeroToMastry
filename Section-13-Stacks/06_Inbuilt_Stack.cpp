// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <stack>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top: " << s.top() << endl;
    s.pop();

    cout << "Size: " << s.size() << endl;
    cout << "isEmpty: " << s.empty() << endl;

    while (!s.empty())
    {
        cout << "Current Top: " << s.top() << endl;
        s.pop();
    }
    cout << "Size: " << s.size() << endl;

    return 0;
}
