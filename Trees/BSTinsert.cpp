#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    node *Node = new node;
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}

void NewNode(node *Node, int data)
{

    if (data > Node->data)
    {
        Node->right = newNode(data);
    }
    else
    {
        Node->left = newNode(data);
    }
}

void inorder(node *Node)
{
    if (!Node)
    {
        return;
    }

    inorder(Node->left);
    cout << Node->data << endl;
    inorder(Node->right);
}

int main()
{

    struct node *Node = newNode(40);

 \   NewNode(Node, 30);
    NewNode(Node, 50);
    NewNode(Node, 70);
    //  NewNode(Node,20);
    //  NewNode(Node,45);

    inorder(Node);

    return 0;
}