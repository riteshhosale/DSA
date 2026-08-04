#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;
};

int main() {
    Node* head = NULL, *temp, *newNode;
    int n, key, pos = 1;
    bool found = false;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        newNode = new Node();

        cout << "Enter data for node " << i << ": ";
        cin >> newNode->data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "\nEnter element to search: ";
    cin >> key;

    temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            found = true;
            break;
        }
        temp = temp->next;
        pos++;
    }

    if (found) 
        cout << "Element " << key << " found at position: " << pos << endl;
    else
        cout << "Element " << key << " not found in the linked list." << endl;
    
    return 0;
}