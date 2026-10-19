
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL, *newNode, *temp;
    int n, i, value, key, pos = 1;
    bool found = false;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        newNode = new Node;

        cout << "Enter data: ";
        cin >> value;

        newNode->data = value;

        if (head == NULL)
        {
            head = newNode;
            temp = head;
            newNode->next = head;
        }
        else
        {
            newNode->next = head;
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Enter element to search: ";
    cin >> key;

    if (head != NULL)
    {
        temp = head;

        do
        {
            if (temp->data == key)
            {
                cout << "Element found at position "
                     << pos << endl;
                found = true;
                break;
            }

            temp = temp->next;
            pos++;

        } while (temp != head);
    }

    if (!found)
        cout << "Element not found" << endl;

    return 0;
}
