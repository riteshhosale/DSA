#include <iostream.h>
#include <conio.h>

#define SIZE 10

int table[SIZE];

void initialize()
{
    int i;
    for (i = 0; i < SIZE; i++)
        table[i] = -1;
}

void insertKey(int key)
{
    int index, i, position;

    index = (key % SIZE + SIZE) % SIZE;
    for (i = 0; i < SIZE; i++)
    {
        position = (index + i) % SIZE;
        if (table[position] == -1)
        {
            table[position] = key;
            cout << "Element inserted at index " << position << endl;
            return;
        }
    }
    cout << "Hash table is full\n";
}

void display()
{
    int i;
    cout << "Index\tValue\n";

    for (i = 0; i < SIZE; i++)
    {
        cout << i << "\t";
        if (table[i] == -1)
            cout << "Empty";
        else
            cout << table[i];
        cout << endl;
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
