// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

template <typename T>
class Pair
{
    T x;
    T y;

public:
    void setX(T x)
    {
        this->x = x;
    }

    T getX()
    {
        return x;
    }
    void setY(T y)
    {
        this->y = y;
    }

    T getY()
    {
        return y;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    //using int using template
    Pair<int> p1;
    p1.setX(1);
    p1.setY(2);
    cout << p1.getX() << " " << p1.getY() << endl;

    //using double using template
    Pair<double> p2;
    p2.setX(1.50);
    p2.setY(2.22);
    cout << p2.getX() << " " << p2.getY() << endl;
    return 0;

    //using char using template
    Pair<char> p3;
    p3.setX('N');
    p3.setY('K');
    cout << p3.getX() << " " << p3.getY() << endl;
    cout << p3.getX() << " " << p3.getY() << endl;
    cout << p3.getX() << " " << p3.getY() << endl;
    return 0;
}
