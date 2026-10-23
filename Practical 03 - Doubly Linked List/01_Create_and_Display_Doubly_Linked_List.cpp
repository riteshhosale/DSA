#include <iostream.h>

struct Node {
   int data;
   Node *prev;
   Node *next;
};

int main() {
   Node *head = NULL, *temp = NULL, *newNode;
   int n, i;
   cout << "Enter number of nodes: ";
   cin >> n;
   for (i = 1; i <= n; i++) {
      newNode = new Node;
      cout << "Enter data for node " << i << ": ";
      cin >> newNode->data;
      newNode->next = NULL;
      newNode->prev = NULL;
      if (head == NULL) { head = newNode; temp = head; }
      else {
         temp->next = newNode;
         newNode->prev = temp; // link back pointer
         temp = newNode;
      }
   }

    cout << "\nDoubly Linked List: NULL <-> ";
    temp = head;
    while (temp != NULL) {
       cout << temp->data << " <-> ";
       temp = temp->next;
    }
    cout << "NULL\n";
    return 0;
}
