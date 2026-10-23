#include <iostream.h>

int heap[50], size = 0;

void insert(int value) {
  int i, temp;
  heap[size] = value;
  i = size;
  size++;
  // move the value up while it is bigger than its parent
  while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
     temp = heap[i];
     heap[i] = heap[(i - 1) / 2];
     heap[(i - 1) / 2] = temp;
     i = (i - 1) / 2;
   }
}
void display() {
   int i;
   cout << "Max Heap elements: ";
   for (i = 0; i < size; i++)
      cout << heap[i] << " ";
   cout << "\n";
}
int main() {
   int n, i, value;
   cout << "Enter number of elements: ";
   cin >> n;
   for (i = 1; i <= n; i++) {
      cout << "Enter element " << i << ": ";
      cin >> value;
      insert(value);
   }
   display();
   return 0;
}
