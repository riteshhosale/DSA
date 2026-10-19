#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

int main() {
    Node *head = NULL, *newNode, *temp;
    int n, i, value;

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
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    cout << "nDoubly Linked List Elements: ";
    temp = head;

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}