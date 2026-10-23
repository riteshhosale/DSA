#include <iostream.h>

#define SIZE 10

struct Node {
   int data;
   Node *next;
};

Node *hashTable[SIZE];

void insert(int key) {
   int index = key % SIZE;         // hash function
   Node *newNode = new Node;
   newNode->data = key;
   newNode->next = NULL;
   if (hashTable[index] == NULL)
      hashTable[index] = newNode;
   else {
      // collision: add new node at the start of the chain
      newNode->next = hashTable[index];
      hashTable[index] = newNode;
   }
}
void display() {
   for (int i = 0; i < SIZE; i++) {
      cout << "Index " << i << ": ";
      Node *temp = hashTable[i];
      while (temp != NULL) {
         cout << temp->data << " -> ";
         temp = temp->next;
      }
      cout << "NULL\n";
   }
}
int main() {
   int n, i, key;
   for (i = 0; i < SIZE; i++)
      hashTable[i] = NULL;
   cout << "Enter number of elements: ";
   cin >> n;
   for (i = 1; i <= n; i++) {
      cout << "Enter element " << i << ": ";
      cin >> key;
      insert(key);
   }
   cout << "\nHash Table (collision handled by chaining):\n";
   display();

    return 0;
}
