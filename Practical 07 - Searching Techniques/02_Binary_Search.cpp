#include <iostream.h>

int main() {
   int arr[50], n, i, key, low, high, mid, found = 0;
   cout << "Enter number of elements: ";
   cin >> n;
   cout << "Enter " << n << " elements in ascending order: ";
   for (i = 0; i < n; i++) cin >> arr[i];
   cout << "Enter element to search: ";
   cin >> key;

    low = 0;
    high = n - 1;
    while (low <= high) {
      mid = (low + high) / 2;

      if (arr[mid] == key) {
         cout << "Element found at position " << mid + 1 << ".\n";
         found = 1;
         break;
      } else if (arr[mid] < key)
         low = mid + 1;        // search right half
      else
         high = mid - 1;      // search left half
    }
    if (!found)
       cout << "Element not found.\n";
    return 0;
}
