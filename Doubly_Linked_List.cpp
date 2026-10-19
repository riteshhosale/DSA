#include <iostream.h>
#include <conio.h>

struct Node {
    int data;
    Node *next;
    Node *prev;
};

int main()
{
    Node *head = NULL, *newNode, *temp;
    int n, i, value;
    clrscr();

    cout << "Enter the number of nodes (0-100): ";
    cin >> n;
    if (n < 0 || n > 100) { cout << "Invalid number of nodes."; getch(); return 0; }

    for (i = 0; i < n; i++) {
        newNode = new Node;
        cout << "Enter data for node: ";
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

    cout << "\nDoubly Linked List Elements: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    getch();
    return 0;
}