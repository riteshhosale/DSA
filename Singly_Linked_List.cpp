#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

int main() {
    Node* head = NULL, *temp, *newNode;
    int n;

    cout << "Enter the number of nodes :";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        newNode = new Node();

        cout << "Enter data for node " << i << ": ";
        cin >> newNode->data;
        newNode->next =NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "\nLinked List elements are: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";

    return 0;
}