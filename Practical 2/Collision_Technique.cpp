#include <iostream>
using namespace std;

const int SIZE = 10;

struct Node
{
    int data;
    Node *next;
};

Node *table[SIZE] = {NULL};

void insertKey(int key)
{
    int index = (key % SIZE + SIZE) % SIZE;
    Node *node = new Node;
    node->data = key;
    node->next = table[index];
    table[index] = node;
    cout << "Element inserted at index " << index << endl;
}

void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << ": ";
        Node *temp = table[i];

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
}

int main()
{
    int choice, key;

    do
    {
        cout << "\n1. Insert\n2. Display\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter key: ";
                cin >> key;
                insertKey(key);
                break;
            case 2:
                display();
                break;
            case 3:
                cout << "Program terminated\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 3);

    return 0;
}