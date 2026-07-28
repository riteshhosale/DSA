#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. search for an element\n";
        cout << "2. sort the array\n";
        cout << "3. Reverse the array\n";
        cout << "4. Display the array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int key, found = 0;
            cout << "Enter the element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at position: " << i + 1 << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Element not found in the array.\n";
                break;
        }

        case 2: {
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            cout << "Array sorted successfully.\n";
            break;
        }

        case 3: {
            for (int i = 0; i < n / 2; i++) {
                int temp = arr[i];
                arr[i] = arr[n - 1 -i];
                arr[n - 1 - i] = temp;
            }

            cout << "Array reversed successfully.\n";
            break;
        }

        case 4: {
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 5:
            cout << "Exiting the program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}