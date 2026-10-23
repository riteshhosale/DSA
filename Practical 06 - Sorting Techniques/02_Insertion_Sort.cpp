#include <iostream.h>
#include <conio.h>

int main()
{
    int a[100], n, i, j, key;

    clrscr();
    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid size\n";
        getch();
        return 0;
    }

    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    cout << "Sorted elements: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    getch();
    return 0;
}
