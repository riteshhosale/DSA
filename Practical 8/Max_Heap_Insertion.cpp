#include <iostream.h>
#include <conio.h>

#define MAX 100

int main()
{
    int heap[MAX], n = 0, value, choice;
    int i, parent, temp;

    clrscr();
    do
    {
        cout << "\n--- MAX HEAP MENU ---\n";
        cout << "1. Insert element\n";
        cout << "2. Display max heap\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (n == MAX)
                {
                    cout << "Heap is full\n";
                    break;
                }

                cout << "Enter element: ";
                cin >> value;
                i = n;
                heap[n] = value;
                n++;

                while (i > 0)
                {
                    parent = (i - 1) / 2;
                    if (heap[parent] >= heap[i])
                        break;

                    temp = heap[parent];
                    heap[parent] = heap[i];
                    heap[i] = temp;
                    i = parent;
                }
                cout << "Element inserted successfully\n";
                break;

            case 2:
                if (n == 0)
                    cout << "Heap is empty\n";
                else
                {
                    cout << "Max heap: ";
                    for (i = 0; i < n; i++)
                        cout << heap[i] << " ";
                    cout << endl;
                }
                break;

            case 3:
                cout << "Program terminated\n";
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 3);

    getch();
    return 0;
}
