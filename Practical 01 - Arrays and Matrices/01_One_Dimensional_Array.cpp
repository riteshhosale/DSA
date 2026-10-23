#include <iostream.h>

int main() {
   int arr[50], n, choice, key, i, found;
   cout << "Enter number of elements: ";
   cin >> n;
   cout << "Enter " << n << " elements: ";
   for (i = 0; i < n; i++)
      cin >> arr[i];

  do {
    cout << "\n----- MENU -----\n";
    cout << "1. Search an element\n";
    cout << "2. Sort the elements\n";
    cout << "3. Reverse the elements\n";
    cout << "4. Display the elements\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

     switch (choice) {
       case 1:
          cout << "Enter element to search: ";
          cin >> key;
          found = -1;
          for (i = 0; i < n; i++)
             if (arr[i] == key) { found = i; break; }
          if (found == -1)
             cout << "Element not found.\n";
          else
             cout << "Element found at position " << found + 1 << ".\n";
          break;
       case 2:
          // Bubble sort (ascending order)
          for (i = 0; i < n - 1; i++)
             for (int j = 0; j < n - 1 - i; j++)
                if (arr[j] > arr[j + 1]) {
                   int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
                }
          cout << "Elements sorted successfully.\n";
          break;
       case 3:
          for (i = 0; i < n / 2; i++) {

              int t = arr[i]; arr[i] = arr[n - 1 - i]; arr[n - 1 - i] = t;
           }
           cout << "Elements reversed successfully.\n";
           break;
         case 4:
           cout << "Elements: ";
           for (i = 0; i < n; i++) cout << arr[i] << " ";
           cout << "\n";
           break;
         case 5:
           cout << "Exiting...\n";
           break;
         default:
           cout << "Invalid choice!\n";
      }
    } while (choice != 5);

    return 0;
}
