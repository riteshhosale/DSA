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
      if (head == NULL) {         // first node
         head = newNode;
         temp = head;
      } else {            // link at the end
         temp->next = newNode;
         temp = newNode;
      }
   }

    cout << "\nLinked List: ";
    temp = head;
    while (temp != NULL) {
       cout << temp->data << " -> ";
       temp = temp->next;
    }
    cout << "NULL\n";
    return 0;
}
