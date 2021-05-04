// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
#include <vector>
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

//printing tree data
void PrintTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return; // this is a edge case not the base case
    }
    cout << root->data << " : ";
    cout << "{";
    for (int i = 0; i < root->children.size(); i++)
    {

        if (i == 0)
        {
            cout << root->children[i]->data;
        }
        else
        {

            cout << " , " << root->children[i]->data;
        }
    }
    cout << "}" << endl;
    //calling recursive
    //leaf node acts as base case for recursion
    for (int i = 0; i < root->children.size(); i++)
    {
        PrintTree(root->children[i]);
    }
}

//function for taking input
TreeNode<int> *takeInput()
{
    // recursive function for taking input
    // no base case required
    // leaf nodes are acting as base case
    int rootData;
    cout << "Enter Data: ";
    cin >> rootData;
    cout << endl;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    int n;
    cout << "Enter No of Children Of " << rootData << " ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

int main()
{
    clock_t t_start = clock();
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *n1 = new TreeNode<int>(2);
    // TreeNode<int> *n2 = new TreeNode<int>(3);
    // root->children.push_back(n1);
    // root->children.push_back(n2);
    TreeNode<int> *root = takeInput();
    PrintTree(root);
    printf("Execution Time: %.2f Seconds\n",
           (double)(clock() - t_start) / CLOCKS_PER_SEC);
    return 0;
}
