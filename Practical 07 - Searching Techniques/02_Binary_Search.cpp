#include <iostream.h>
#include <conio.h>

int main()
{
    int a[100], n, key, i;
    int low, high, mid, pos;

    clrscr();
    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid size\n";
        getch();
        return 0;
    }

    cout << "Enter elements in ascending order: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    low = 0;
    high = n - 1;
    pos = -1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] == key)
        {
            pos = mid;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (pos == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at position " << pos + 1 << endl;

    getch();
    return 0;
}
