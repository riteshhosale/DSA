#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
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

        if (head == NULL) {
            head = newNode;
            temp = head;
            newNode->next = head;
        }
        else {
            newNode->next = head;
            temp->next = newNode;
            temp = newNode;
        }
    }


    cout << "\nCircular Linked List Elements: ";

    if (head != NULL) {
        temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
    }

    cout << "(back to head)\n";

    return 0;
}