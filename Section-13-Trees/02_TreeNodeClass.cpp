// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;
template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;
    TreeNode(T data)
    {
        this->data = data;
    }
};
int main()
{
    clock_t t_start = clock();
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *n1 = new TreeNode<int>(2);
    TreeNode<int> *n2 = new TreeNode<int>(3);
    root->children.push_back(n1);
    root->children.push_back(n2);
    printf("Execution Time: %.2f Seconds\n",
           (double)(clock() - t_start) / CLOCKS_PER_SEC);
    return 0;
}
