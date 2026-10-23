#include <iostream.h>
#include <conio.h>

int main()
{
    int a[100], n, i, j, minIndex, temp;

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

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
                minIndex = j;
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    cout << "Sorted elements: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    getch();
    return 0;
}
