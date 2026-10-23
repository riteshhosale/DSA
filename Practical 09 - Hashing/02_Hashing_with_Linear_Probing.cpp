#include <iostream.h>

#define SIZE 10

int hashTable[SIZE];

int main() {
   int n, i, key, index, count;
   for (i = 0; i < SIZE; i++)
      hashTable[i] = -1;        // -1 means empty slot

    cout << "Enter number of elements (max " << SIZE << "): ";
    cin >> n;
    for (i = 1; i <= n; i++) {
       cout << "Enter element " << i << ": ";
       cin >> key;
       index = key % SIZE;           // hash function
       count = 0;
       // if slot is full, move to the next slot (linear probing)
       while (hashTable[index] != -1 && count < SIZE) {
           index = (index + 1) % SIZE;
           count++;
       }
       if (count == SIZE)
           cout << "Hash table is full!\n";
       else
           hashTable[index] = key;
    }

    cout << "\nHash Table (using linear probing):\n";
    for (i = 0; i < SIZE; i++) {
       cout << "Index " << i << ": ";
       if (hashTable[i] == -1)
          cout << "Empty\n";
       else
          cout << hashTable[i] << "\n";
    }
    return 0;
}
