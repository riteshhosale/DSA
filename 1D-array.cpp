#include <iostream>
using namespace std;

int main() {
    int a[100], n, i, j, choice, key, temp;
    bool found;

    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) 
        cin >> a[i];

        do {
            cout << "\n--- MENU ---\n";
            cout << "1. Search for an element\n";
            cout << "2. Sort the array\n";
            cout << "3. Reverse the array\n";
            cout << "4. Display the array\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter element to search: ";
                    cin >> key;
                    found = false;
                    for (i = 0; i < n; i++) {
                        if (a[i] == key) {
                            cout << "Element found at pasition " << i + 1 << endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "Element not found\n";
                        break;
                    }

                case 2:
                    for (i = 0; i < n - 1; i++) {
                        for (j = i + 1; j < n; j++) {
                            if (a[i] > a[j]) {
                                temp = a[i];
                                a[i] = a[j];
                                a[j] = temp;
                            }
                        }
                    }

                    cout << "Array sorted successfully\n";
                    break;

                case 3:
                    for (i = 0, j = n - 1; i < j; i++, j--) {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                    cout << "Array reversed successfully\n";
                    break;

                case 4:
                    cout << "Array elements: ";
                    for (i = 0; i < n; i++)
                        cout << a[i] << " ";
                    break;

                case 5:
                    cout << "Program exited successfully\n";
                    break;

                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 5);
    return 0;
}