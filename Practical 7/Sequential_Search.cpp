#include <iostream.h>
#include <conio.h>

int main()
{
    int a[100], n, key, i, pos;

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

    cout << "Enter element to search: ";
    cin >> key;

    pos = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at position " << pos + 1 << endl;

    getch();
    return 0;
}
