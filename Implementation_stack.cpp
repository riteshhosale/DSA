#include <iostream>
using namespace std;

int stk[5], top = -1, data;

void push();
void pop();

int main() {
    int ch;
    do {
        cout << "\n--- MENU ---\n";
        cout << "\n1. PUSH";
        cout << "\n2. POP";
        cout << "\n3. EXIT";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (ch != 3);

    return 0;
}

void push() {
    if (top == 4) {
        cout << "Stack is Overflow\n";
        return;
    }

    cout << "Enter data to push: ";
    cin >> data;

    top++;
    stk[top] = data;
}

void pop() {
    if (top == -1) {
        cout << "Stack is Underflow\n";
        return;
    }

    cout << "Deleted element is " << stk[top] << endl;
    top--;
}