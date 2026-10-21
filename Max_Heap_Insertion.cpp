#include <iostream>
using namespace std;

int main()
{
    int heap[100], n = 0, value, choice;

    do
    {
        cout << "\n1. Insert element\n";
        cout << "2. Display max heap\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (n == 100)
            {
                cout << "Heap is full\n";
                continue;
            }

            cout << "Enter element: ";
            cin >> value;

            int i = n;
            heap[n] = value;
            n++;

            while (i > 0)
            {
                int parent = (i - 1) / 2;

                if (heap[parent] >= heap[i])
                    break;

                int temp = heap[parent];
                heap[parent] = heap[i];
                heap[i] = temp;
                i = parent;
            }

            cout << "Element inserted\n";
        }
        else if (choice == 2)
        {
            if (n == 0)
                cout << "Heap is empty\n";
            else
            {
                cout << "Max heap: ";
                for (int i = 0; i < n; i++)
                    cout << heap[i] << " ";
                cout << endl;
            }
        }
        else if (choice == 3)
            cout << "Program terminated\n";
        else
            cout << "Invalid choice\n";

    } while (choice != 3);

    return 0;
}