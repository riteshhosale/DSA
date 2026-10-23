#include <iostream.h>

int main() {
   int a[10][10], b[10][10], c[10][10];
   int n, i, j, k, choice;
   cout << "Enter the size of square matrices (n for n x n): ";
   cin >> n;
   cout << "Enter elements of first matrix A:\n";
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
         cin >> a[i][j];
   cout << "Enter elements of second matrix B:\n";
   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
         cin >> b[i][j];

  do {
    cout << "\n----- MATRIX MENU -----\n";
    cout << "1. Addition\n";
    cout << "2. Multiplication\n";
    cout << "3. Transpose of A\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

     switch (choice) {
       case 1:
          for (i = 0; i < n; i++)
             for (j = 0; j < n; j++)
                c[i][j] = a[i][j] + b[i][j];
          cout << "Sum of matrices:\n";
          for (i = 0; i < n; i++) {
             for (j = 0; j < n; j++) cout << c[i][j] << " ";
             cout << "\n";
          }
          break;
       case 2:
          for (i = 0; i < n; i++)
             for (j = 0; j < n; j++) {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                   c[i][j] += a[i][k] * b[k][j];
             }
          cout << "Product of matrices:\n";
          for (i = 0; i < n; i++) {
             for (j = 0; j < n; j++) cout << c[i][j] << " ";
             cout << "\n";
          }
          break;
       case 3:

           cout << "Transpose of matrix A:\n";
           for (i = 0; i < n; i++) {
              for (j = 0; j < n; j++) cout << a[j][i] << " ";
              cout << "\n";
           }
           break;
         case 4:
           cout << "Exiting...\n";
           break;
         default:
           cout << "Invalid choice!\n";
      }
    } while (choice != 4);

    return 0;
}
