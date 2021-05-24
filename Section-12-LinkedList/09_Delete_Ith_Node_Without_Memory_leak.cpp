// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
using namespace std;

// Node Class
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// taking Input from user in forward dir
Node *takingInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        //creating Linked List
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n; // inserting at tail
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

//taking input from user in reverse direction
// taking Input from user in forward dir
Node *takingInput2()
{
    int data;
    cin >> data;
    Node *head = NULL; /// LL is empty
    Node *tail = NULL; /// LL is empty
    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head; /// Inserting at head
            head = n;
        }
        cin >> data;
    }
    return head;
}

//printing linked list
void printList(Node *head) //pass by value // pass by ref : Node *&head
{

    //Avoid Writing Like This
    // while (head != NULL)
    // {
    //     cout << head->data << "->";
    //     head = head->next;
    // }
    // cout << endl;

    Node *temp = head; // proper way
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << "->";
    //     temp = temp->next;
    // }
    // cout << "NULL" << endl;
}

// Fuction For Finding Length of Linked list
int length(Node *head)
{
    Node *temp = head;
    int ans = 0; // variable that stores length of ll
    while (temp != NULL)
    {
        ans++;
        temp = temp->next;
    }
    return ans;
}

//print ith node
Node *print_ith_node(Node *head, int i) //time complexity O(n+i);
{
    int n = length(head);
    if (i < 0 or i > n - 1)
    {
        cout << "Invalid Position : ";
        Node *ret = new Node(-1);
        return ret;
    }
    int temp = 0;
    while (temp < i)
    {
        temp++;
        head = head->next;
    }
    return head;
}

//optimized print ith node;
void print_ith_node_2(Node *head, int i) //time complexity O(i);
{
    if (i < 0)
    {
        cout << -1 << endl;
        return;
    }
    int temp = 0;
    while (temp++ < i && head)
    {
        head = head->next;
    }
    if (head)
    {
        cout << head->data << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

// insert at ith position (1-based Indexing)
Node *insert_at_pos(Node *head, int pos, int data)
{
    if (pos <= 0 or pos - 1 > length(head))
    {
        return head;
    }
    if (pos == 1)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *n = new Node(data);
    n->next = temp->next;
    temp->next = n;
    return head;
}

//deleting ith node with memory leak
Node *delete_ith_node(Node *head, int pos)
{
    if (pos <= 0)
    {
        return head;
    }
    if (pos == 1 && head)
    {
        Node *new_head = head->next;
        head->next == NULL;
        delete head;
        return new_head;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp && temp->next)
    {
        Node *t = temp->next;
        temp->next = temp->next->next;
        t->next = NULL;
        delete t;
    }
    return head;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    // stactic alloaction
    // Node n1(1); // if there is partameterised constructior then default constructor not work;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // Node *head = &n1;
    // n1.next = &n2; // assigning address of node 2 to node 1;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;
    // n5.next = NULL;

    Node *head = takingInput();
    cout << "In Forward Dir: " << endl;
    printList(head);
    // cout << "In Backward Dir: " << endl;
    // Node *head2 = takingInput2();
    // printList(head2);
    cout << "Length of Linked List: " << length(head) << endl;
    // cout << "Node at Pos 3(0-based) is : " << print_ith_node(head, 3)->data << endl;
    // cout << "Node at Pos 6(0-based) is : " << print_ith_node(head, 6)->data << endl;

    head = insert_at_pos(head, 3, 17);
    cout << "Updated List: " << endl;
    printList(head);
    head = insert_at_pos(head, 8, 15);
    cout << "Updated List: " << endl;
    printList(head);
    head = insert_at_pos(head, 1, 13);
    cout << "Updated List: " << endl;
    printList(head);
    cout << "*****After Deletion*****" << endl;
    head = delete_ith_node(head, 3);
    cout << "Updated List: " << endl;
    printList(head);
    head = delete_ith_node(head, 8);
    cout << "Updated List: " << endl;
    printList(head);
    head = delete_ith_node(head, 1);
    cout << "Updated List: " << endl;
    printList(head);
    // cout << "Node at Pos 3(0-based) is : ";
    // print_ith_node_2(head, 3);
    // cout << "Node at Pos 6(0-based) is : ";
    // print_ith_node_2(head, 6);

    //Dynamically Creating Node
    // Node *n1 = new Node(1);
    // Node *n2 = new Node(2);
    // cout << n1.data << " " << n2.data << endl;
    // Node *head = &n1;
    // cout << "Head Data :" << head->data << endl;

    return 0;
}
