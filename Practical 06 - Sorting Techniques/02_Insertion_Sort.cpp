#include <iostream.h>

int main() {
   int arr[50], n, i, j, key;
   cout << "Enter number of elements: ";
   cin >> n;
   cout << "Enter " << n << " elements: ";
   for (i = 0; i < n; i++) cin >> arr[i];

    // Insertion sort: insert each element into its correct place
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j]; // shift larger elements right

           j--;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
