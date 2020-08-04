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

void BFS(node *Node)
{
  if (Node == NULL)
    return;

  queue<node *> q;

  q.push(Node);

  while (q.empty() == false)
  {
    node *root = q.front();
    cout << root->data << " ";
    q.pop();

    if (root->left != NULL)
    {
      q.push(root->left);
    }
    if (root->right != NULL)
    {
      q.push(root->right);
    }
  }
}

int main()
{
  node *root = newNode(1);

  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  cout << "BFS\t";
  BFS(root);

  return 0;
}