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

int height(struct node *Node)
{
    if (Node == NULL)
    {
        return 0;
    }

    return 1 + max(height(Node->left), height(Node->right));
}

int diameter(struct node *Node)
{
    if (Node == NULL)
    {
        return 0;
    }

    int lheight = height(Node->left);
    int rheight = height(Node->right);

    int lDia = diameter(Node->left);
    int rDia = diameter(Node->right);

    // return max(lheight + rheight+1, max(lDia,rDia));
    return lheight + rheight + 1;
}

int main()
{
    node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->right = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(9);

    cout<< "Diameter:  " << diameter(root);

    return 0;
}