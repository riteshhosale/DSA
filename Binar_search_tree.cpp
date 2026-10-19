#include <iostream>
using namespace std;

struct Node {
    int info;
    Node *left, *right;
};

Node *root = NULL;

Node *maketree(int x) {
    Node *p = new Node;
    p->info = x;
    p->left = p->right = NULL;
    return p;
}

Node *insert(Node *tree, int x) {
    if (tree == NULL) 
        return maketree(x);
    
    if (x < tree->info)
        tree->left = insert(tree->left, x);
    else if (x > tree->info)
        tree->right = insert(tree->right, x);
    else
        cout << "Duplicate number\n";

    return tree;
}

void preorder(Node *tree) {
    if (tree != NULL) {
        cout << tree->info << "\t";
        preorder(tree->left);
        preorder(tree->right);
    }
}

void inorder(Node *tree) {
    if (tree != NULL) {
        inorder(tree->left);
        cout << tree->info << "\t";
        inorder(tree->right);
    }
}

void postorder(Node *tree) {
    if (tree != NULL) {
        postorder(tree->left);
        postorder(tree->right);
        cout << tree->info << "\t";
    }
}

int main() {
    int ch, x;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert\n";
        cout << "2. Preorder Traversal\n";
        cout << "3. Inorder Traversal\n";
        cout << "4. Postorder Traversal\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1:
                cout << "Enter number to insert: ";
                cin >> x;
                root = insert(root, x);

                cout << "Enter number (0 to stop): ";
                while (cin >> x && x != 0) 
                    root = insert(root, x);
                break;

            case 2:
                preorder(root);
                cout << endl;
                break;
            
            case 3:
                inorder(root);
                cout << endl;
                break;
            
            case 4:
                postorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Program exited successfully\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (ch != 5);

    return 0;
}