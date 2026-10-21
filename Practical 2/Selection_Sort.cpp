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

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minIndex])
                minIndex = j;

        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}