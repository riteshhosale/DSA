#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, i, j, k, choice;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter elements of first matrix:\n";
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            cin >> a[i][j];

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Matrix Addition\n";
        cout << "2. Matrix Multiplication\n";
        cout << "3. Matrix Transpose\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter rows and columns for second Matrix: ";
                cin >> r2 >> c2;

                if (r1 != r2 || c1 != c2) {
                    cout << "Addition is not possible\n";
                    break;
                }

                cout << "Enter elements of second matrix:\n";
                for (i = 0; i < r2; i++)
                    for (j = 0; j < c2; j++)
                        cin >> b[i][j];

                cout << "Addition of matrices:\n";
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++) {
                        c[i][j] = a[i][j] + b[i][j];
                        cout << c[i][j] << " ";
                    }
                    cout << endl;
                }
                break;

            case 2:
                cout << "Enter rows and columns for second Matrix: ";
                cin >> r2 >> c2;

                if (c1 != r2) {
                    cout << "Multiplication is not possible\n";
                    break;
                }

                cout << "Enter elements of second matrix:\n";
                for (i = 0; i < r2; i++)
                    for (j = 0; j < c2; j++)
                        cin >> b[i][j];

                for (i = 0; i < r1; i++) 
                    for (j = 0; j < c2; j++) {
                        c[i][j] = 0;
                        for (k = 0; k < c1; k++)
                            c[i][j] += a[i][k] * b[k][j];
                    }

                cout << "Multiplication of matrices:\n";
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++)
                        cout << c[i][j] << " ";
                    cout << endl;
                }
                break;
            
            case 3:
                cout << "Transpose of first matrix:\n";
                for (j = 0; j < c1; j++) {
                    for (i = 0; i < r1; i++)
                        cout << a[i][j] << " ";
                    cout << endl;
                }
                break;

            case 4:
                cout << "Program exited successfully\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}
