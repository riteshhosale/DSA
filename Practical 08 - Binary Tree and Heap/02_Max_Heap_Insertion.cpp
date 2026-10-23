#include <iostream.h>

int heap[50], size = 0;

void insert(int value) {
  heap[size] = value;       // place new value at the end
  int i = size;
  size++;
  // move the value up while it is bigger than its parent
  while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
     int temp = heap[i];
     heap[i] = heap[(i - 1) / 2];
     heap[(i - 1) / 2] = temp;
     i = (i - 1) / 2;

   }
}
void display() {
   cout << "Max Heap elements: ";
   for (int i = 0; i < size; i++)
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
