#include <iostream.h>

#define SIZE 5

int stk[SIZE], top = -1;

void push(int value) {
   if (top == SIZE - 1)
      cout << "Stack Overflow! Cannot push.\n";
   else {
      top++;
      stk[top] = value;
      cout << value << " pushed to stack.\n";
   }
}
void pop() {
   if (top == -1)
      cout << "Stack Underflow! Stack is empty.\n";
   else {
      cout << stk[top] << " popped from stack.\n";
      top--;
   }
}
void display() {
   int i;
   if (top == -1)
      cout << "Stack is empty.\n";
   else {
      cout << "Stack elements (top to bottom): ";
      for (i = top; i >= 0; i--)
         cout << stk[i] << " ";
      cout << "\n";
   }
}
int main() {
   int choice, value;
   do {
      cout << "\n----- STACK MENU -----\n";
      cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
      cout << "Enter your choice: ";
      cin >> choice;
      switch (choice) {
         case 1:
            cout << "Enter value to push: ";
            cin >> value;
            push(value);
            break;
         case 2: pop(); break;
         case 3: display(); break;
         case 4: cout << "Exiting...\n"; break;

         default: cout << "Invalid choice!\n";
       }
    } while (choice != 4);
    return 0;
}
