#include <iostream.h>
#include <conio.h>

#define SIZE 10

struct Node
{
    int data;
    Node *next;
};

Node *table[SIZE];

void initialize()
{
    int i;
    for (i = 0; i < SIZE; i++)
        table[i] = NULL;
}

void insertKey(int key)
{
    int index;
    Node *node;

    index = (key % SIZE + SIZE) % SIZE;
    node = new Node;
    node->data = key;
    node->next = table[index];
    table[index] = node;

    cout << "Element inserted at index " << index << endl;
}

void display()
{
    int i;
    Node *temp;

    for (i = 0; i < SIZE; i++)
    {
        cout << i << ": ";
        temp = table[i];

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

    clrscr();
    initialize();

    do
    {
        cout << "\n--- HASH TABLE MENU ---\n";
        cout << "1. Insert\n2. Display\n3. Exit\n";
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

    getch();
    return 0;
}
