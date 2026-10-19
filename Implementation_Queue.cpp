#include <iostream.h>
#include <conio.h>

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

void insertElement()
{
    int value;
    if (rear == MAX - 1) {
        cout << "Queue is overflow\n";
    } else {
        cout << "Enter element to insert: ";
        cin >> value;
        if (front == -1) front = 0;
        rear++;
        queue[rear] = value;
        cout << "Element inserted successfully\n";
    }
}

void deleteElement()
{
    if (front == -1 || front > rear) {
        cout << "Queue is underflow\n";
    } else {
        cout << "Deleted element is " << queue[front] << endl;
        front++;
        if (front > rear) front = rear = -1;
    }
}

void display()
{
    int i;
    if (front == -1) cout << "Queue is empty\n";
    else {
        cout << "Queue elements: ";
        for (i = front; i <= rear; i++) cout << queue[i] << " ";
        cout << endl;
    }
}

int main()
{
    int choice;
    clrscr();
    do {
        cout << "\n--- QUEUE MENU ---\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: insertElement(); break;
            case 2: deleteElement(); break;
            case 3: display(); break;
            case 4: cout << "Program exited successfully\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    getch();
    return 0;
}