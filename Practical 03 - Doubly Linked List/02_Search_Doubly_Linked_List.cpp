#include <iostream.h>

struct Node {
   int data;
   Node *prev;
   Node *next;
};

int main() {
   Node *head = NULL, *temp = NULL, *newNode;
   int n, i, key;
   cout << "Enter number of nodes: ";
   cin >> n;
   for (i = 1; i <= n; i++) {
      newNode = new Node;
      cout << "Enter data for node " << i << ": ";
      cin >> newNode->data;
      newNode->next = NULL;
      newNode->prev = NULL;
      if (head == NULL) { head = newNode; temp = head; }
      else { temp->next = newNode; newNode->prev = temp; temp = newNode; }
   }

    cout << "Enter element to search: ";
    cin >> key;

    temp = head;
    int pos = 1, found = 0;
    while (temp != NULL) {
       if (temp->data == key) { found = 1; break; }
       pos++;
       temp = temp->next;
    }
    if (found)
       cout << "Element " << key << " found at position " << pos << ".\n";
    else
       cout << "Element " << key << " not found in the list.\n";
    return 0;
}
