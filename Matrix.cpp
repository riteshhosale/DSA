#include <iostream>
#include <cstdlib> // Modern replacement for stdlib.h

using namespace std; // Allows using cout and cin without std::

class matrix {
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i, j;
    
public:
    void read();
    void display();
    void add();
    void sub();
    void mul();
    void trans();
};

void matrix::read() {
    cout << "Enter matrix A elements (2x2):\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter matrix B elements (2x2):\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
}

void matrix::display() {
    cout << "matrix of A:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "matrix of B:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix::add() {
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Addition of A and B:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix::sub() {
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    cout << "Subtraction of A and B:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix::mul() {
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Multiplication of A and B:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix::trans() {
    cout << "Transpose of matrix A:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << a[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "Transpose of matrix B:\n";
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            cout << b[j][i] << " ";
        }
        cout << "\n";
    }
}

int main() { // Fixed return type to int
    matrix m;
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Read matrices\n";
        cout << "2. Display matrices\n";
        cout << "3. Add matrices\n";
        cout << "4. Subtract matrices\n";
        cout << "5. Multiply matrices\n";
        cout << "6. Transpose matrices\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                m.read();
                break;
            case 2:
                m.display();
                break;
            case 3:
                m.add();
                break;
            case 4:
                m.sub();
                break;
            case 5:
                m.mul();
                break;
            case 6:
                m.trans();
                break;
            case 7:
                cout << "Exiting program.\n";
                break; // Handled cleanly without requiring exit(0)
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 7);
    
    return 0; // Standard program success signal
}
