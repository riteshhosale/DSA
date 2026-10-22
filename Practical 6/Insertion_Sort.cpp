#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid size\n";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}
