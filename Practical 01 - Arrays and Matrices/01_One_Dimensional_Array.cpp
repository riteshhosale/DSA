#include <iostream.h>
#include <conio.h>

int main()
{
    int a[100], n, i, j, choice, key, temp, found;
    clrscr();

    cout << "Enter number of elements (1-100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid number of elements.";
        getch();
        return 0;
    }

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
                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == key) {
                        cout << "Element found at position " << i + 1 << endl;
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    cout << "Element not found\n";
                break;

            case 2:
                for (i = 0; i < n - 1; i++)
                    for (j = i + 1; j < n; j++)
                        if (a[i] > a[j]) {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
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
                cout << endl;
                break;

            case 5:
                cout << "Program exited successfully\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    getch();
    return 0;
}
