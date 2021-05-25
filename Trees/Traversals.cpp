#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data)
{
    struct node *Node = new node;
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}

void preorder(struct node *Node)
{
    if (Node == NULL)
    {
        return;
    }

    cout << Node->data << "\t";
    preorder(Node->left);
    preorder(Node->right);
}

void postorder(struct node *Node)
{
    if (Node == NULL)
    {
        return;
    }
    postorder(Node->left);
    postorder(Node->right);
    cout << Node->data << '\t';
}

void inorder(struct node *Node)
{
    if (Node == NULL)
        return;
    inorder(Node->left);
    cout << Node->data << "\t";
    inorder(Node->right);
}

int main()
{
    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "PreOrder     ";
    preorder(root);

    cout << "\n"
         << "POST Order   ";
    postorder(root);

    cout << "\n"
         << "In Order     ";
    inorder(root);

    return 0;
}