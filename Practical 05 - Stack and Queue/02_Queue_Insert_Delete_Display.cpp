#include <iostream.h>

#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void insert(int value) {
  if (rear == SIZE - 1)
     cout << "Queue Overflow! Cannot insert.\n";
  else {
     if (front == -1) front = 0; // first insertion
     rear++;
     queue[rear] = value;
     cout << value << " inserted into queue.\n";
   }
}
void deleteElement() {
   if (front == -1 || front > rear)
      cout << "Queue Underflow! Queue is empty.\n";
   else {
      cout << queue[front] << " deleted from queue.\n";
      front++;
   }
}
void display() {
   int i;
   if (front == -1 || front > rear)
      cout << "Queue is empty.\n";
   else {
      cout << "Queue elements (front to rear): ";
      for (i = front; i <= rear; i++)
         cout << queue[i] << " ";
      cout << "\n";
   }
}
int main() {
   int choice, value;
   do {
      cout << "\n----- QUEUE MENU -----\n";
      cout << "1. Insert\n2. Delete\n3. Display\n4. Exit\n";
      cout << "Enter your choice: ";
      cin >> choice;
      switch (choice) {
         case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            insert(value);
            break;
         case 2: deleteElement(); break;
         case 3: display(); break;
         case 4: cout << "Exiting...\n"; break;
         default: cout << "Invalid choice!\n";
      }
   } while (choice != 4);
   return 0;
}
