// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <vector>
using namespace std;

void print_subs(string input, string output, vector<string> &v)
{
    if (input.length() == 0)
    {
        v.push_back(output);
        return;
    }
    print_subs(input.substr(1), output + input[0], v); /// include
    print_subs(input.substr(1), output, v);            /// exclude
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    cout << "Input: \n";
    string in;
    cin >> in;
    string out = "";

    vector<string> v;
    print_subs(in, out, v);
    cout << "Output: \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << "Count: " << v.size() << endl;

    return 0;
}
