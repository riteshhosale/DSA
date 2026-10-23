#include <iostream.h>

int main() {
   int arr[50], n, i, key, found = 0;
   cout << "Enter number of elements: ";
   cin >> n;
   cout << "Enter " << n << " elements: ";
   for (i = 0; i < n; i++) cin >> arr[i];
   cout << "Enter element to search: ";
   cin >> key;

    // Sequential (linear) search: check each element one by one
    for (i = 0; i < n; i++) {
       if (arr[i] == key) {
          cout << "Element found at position " << i + 1 << ".\n";
          found = 1;
          break;
       }
    }
    if (!found)
       cout << "Element not found.\n";
    return 0;
}
