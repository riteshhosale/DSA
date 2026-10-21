#include <iostream>
using namespace std;

int main()
{
    int a[100], n, key, low, high, mid, pos = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid size\n";
        return 0;
    }

    cout << "Enter elements in ascending order: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    low = 0;
    high = n - 1;

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

    return 0;
}