// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
#include <vector>
#include <queue>
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
    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i]; // Recursive Destructor (same as postorder manner)
        }
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

void PrintLevelWise(TreeNode<int> *root)
{
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *f = q.front();
        q.pop();
        cout << f->data << " : {";
        for (int i = 0; i < f->children.size(); i++)
        {
            if (i == 0)
            {
                cout << f->children[i]->data;
            }
            else
            {

                cout << " ," << f->children[i]->data;
            }
            q.push(f->children[i]);
        }
        cout << "}" << endl;
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

//taking input level wise
TreeNode<int> *takingInputLevelWise()
{
    int rootData;
    cout << "Enter Root Data: ";
    cin >> rootData;
    cout << endl;
    queue<TreeNode<int> *> q;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *f = q.front();
        q.pop();
        cout << "Enter No of Child of " << f->data << " : ";
        int n;
        cin >> n;
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            int childData;
            cout << "Enter " << i << " th Child of " << f->data << " : ";
            cin >> childData;
            cout << endl;
            TreeNode<int> *child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}

// code for counting nodes in a tree
int count_node(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += count_node(root->children[i]);
    }
    return ans;
}

//code for finding height of tree
int height(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int max = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int childHeight = height(root->children[i]);
        if (childHeight > max)
        {
            max = childHeight;
        }
    }
    return max + 1;
}

// code for printing data at level k from root
void PrintAtLevel(TreeNode<int> *root, int k)
{
    if (root == NULL) // edge case
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        PrintAtLevel(root->children[i], k - 1);
    }
}

int countLeafNodes(TreeNode<int> *root)
{
    if (root == NULL) // edge case
    {
        return 0;
    }
    if (root->children.size() == 0)
    {
        return 1;
    }
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countLeafNodes(root->children[i]);
    }
    return ans;
}
void countLeafNodesOtherWay(TreeNode<int> *root, int &ans)
{
    if (root == NULL) // edge case
    {
        return;
    }
    if (root->children.size() == 0)
    {
        ans++;
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        countLeafNodesOtherWay(root->children[i], ans);
    }
}

void PreOrder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        PreOrder(root->children[i]);
    }
}

void PostOrder(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        PostOrder(root->children[i]);
    }
    cout << root->data << " ";
}

void deleteTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children[i]);
    }
    delete root;
}
// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0 Testing Set
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
    // TreeNode<int> *root = takeInput();
    TreeNode<int> *root = takingInputLevelWise();
    // PrintTree(root);
    // PrintLevelWise(root);
    int ans = count_node(root);
    cout << "Total No of Nodes: " << ans << endl;
    int ht = height(root);
    cout << "Height of Tree: " << ht << endl;
    cout << "Nodes at Level " << 2 << " are: ";
    PrintAtLevel(root, 2);
    cout << endl;
    int leafNode = countLeafNodes(root);
    cout << "No of Leaf Nodes: " << leafNode << endl;
    int leaf_ans = 0;
    countLeafNodesOtherWay(root, leaf_ans);
    cout << "No of Leaf Node in Other Way: " << leaf_ans << endl;
    cout << "PreOrderTraversal: ";
    PreOrder(root);
    cout << endl;
    cout << "PostOrderTraversal: ";
    PostOrder(root);
    cout << endl;
    // deleteTree(root);
    delete root; //delete goes to destructor and execute destructor code and came back and then delete node  (very very important)
    printf("Execution Time: %.2f Seconds\n", (double)(clock() - t_start) / CLOCKS_PER_SEC);
    return 0;
}
// all code is written by krishna--> reference of this course udemy DSA zero to mastary Course