#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

int main() {
    Node *head = NULL, *newNode, *temp;
    int n, i, value, key, pos = 1;
    bool found = false;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        newNode = new Node;

        cout << "Enter Data for node: ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } 
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    cout << "Enter element to search in the Doubly Linked List: ";
    cin >> key;

    temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Element found at position " << pos << endl;
            found = true;
            break;
        }

        temp = temp->next;
        pos++;
    }

    if (!found)
        cout << "Element not found in the Doubly Linked List\n" << endl;

    return 0;

}