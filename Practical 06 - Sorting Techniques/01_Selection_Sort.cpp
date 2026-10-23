#include <iostream.h>

int main() {
   int arr[50], n, i, j, min;
   cout << "Enter number of elements: ";
   cin >> n;
   cout << "Enter " << n << " elements: ";
   for (i = 0; i < n; i++) cin >> arr[i];

    // Selection sort: pick the smallest element each pass
    for (i = 0; i < n - 1; i++) {
       min = i;
       for (j = i + 1; j < n; j++)
          if (arr[j] < arr[min])
             min = j;
       int temp = arr[min];        // swap smallest to its place
       arr[min] = arr[i];
       arr[i] = temp;
    }

    cout << "Sorted array: ";
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
