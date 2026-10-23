#include <iostream.h>

struct Node {
   int data;
   Node *left;
   Node *right;
};

// create a new node
Node* createNode(int value) {
   Node *newNode = new Node;
   newNode->data = value;
   newNode->left = NULL;
   newNode->right = NULL;
   return newNode;
}

// insert a value into the binary search tree
Node* insert(Node *root, int value) {
    if (root == NULL)
       return createNode(value);
    if (value < root->data)
       root->left = insert(root->left, value);
    else
       root->right = insert(root->right, value);
    return root;
}

void inorder(Node *root) {      // Left, Root, Right
  if (root != NULL) {
     inorder(root->left);
     cout << root->data << " ";
     inorder(root->right);
  }
}
void preorder(Node *root) {      // Root, Left, Right
  if (root != NULL) {
     cout << root->data << " ";
     preorder(root->left);
     preorder(root->right);
  }
}
void postorder(Node *root) {      // Left, Right, Root
  if (root != NULL) {
     postorder(root->left);
     postorder(root->right);
     cout << root->data << " ";
  }

}

int main() {
   Node *root = NULL;
   int n, i, value;
   cout << "Enter number of nodes: ";
   cin >> n;
   for (i = 1; i <= n; i++) {
      cout << "Enter value " << i << ": ";
      cin >> value;
      root = insert(root, value);
   }

    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << "\nPreorder Traversal: ";
    preorder(root);
    cout << "\nPostorder Traversal: ";
    postorder(root);
    cout << "\n";
    return 0;
}
