#include <iostream.h>

struct Node {
   int data;
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
      if (head == NULL) { head = newNode; temp = head; }
      else { temp->next = newNode; temp = newNode; }
   }
   temp->next = head; // last node points back to first node

    cout << "\nCircular Linked List: ";
    temp = head;
    if (head != NULL) {
       do {
          cout << temp->data << " -> ";
          temp = temp->next;
       } while (temp != head);
    }
    cout << "(back to head)\n";
    return 0;
}
