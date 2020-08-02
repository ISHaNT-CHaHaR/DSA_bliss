
// TREES are herarichical Data Structures.

// Top Most elements are roots.
//
//          a -- root element
//         / \     
//        b   c
//       /\   /\                                                      //
//      d  e f  g -- leaves
//   --------------------------
//   a is the parent of b and c.

// Why Trees?
// 1. One reason to use trees might be because you want to store information that naturally forms a hierarchy. For example, the file system on a computer:

// 2. Trees (with some ordering e.g., BST) provide moderate access/search (quicker than Linked List and slower than arrays).
// 3. Trees provide moderate insertion/deletion (quicker than Arrays and slower than Unordered Linked Lists).
// 4. Like Linked Lists and unlike Arrays, Trees don’t have an upper limit on number of nodes as nodes are linked using pointers.

// Main applications of trees include:
// 1. Manipulate hierarchical data.
// 2. Make information easy to search (see tree traversal).
// 3. Manipulate sorted lists of data.
// 4. As a workflow for compositing digital images for visual effects.
// 5. Router algorithms
// 6. Form of a multi-stage decision-making (see business chess).

//#include <iostream>
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

int main()
{
    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    cout << root->data << '\n';
    cout << root->left->data;
    return 0;
}