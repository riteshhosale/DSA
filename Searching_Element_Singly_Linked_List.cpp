#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
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

        if (head == NULL) {
            head = newNode;
            temp = head;
        } 
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Enter element to search in the Linked List: ";
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
        cout << "Element not found in the Linked List\n" << endl;
    
    return 0;
}