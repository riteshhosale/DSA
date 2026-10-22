#include <iostream.h>
#include <conio.h>
struct Node { int data; Node *next; Node *prev; };
int main() {
    Node *head=NULL,*newNode,*temp; int n,i,value,key,pos=1,found=0; clrscr();
    cout<<"Enter the number of nodes (0-100): "; cin>>n;
    if(n<0||n>100) { cout<<"Invalid number of nodes."; getch(); return 0; }
    for(i=0;i<n;i++) {
        newNode=new Node; cout<<"Enter data: "; cin>>value; newNode->data=value; newNode->next=NULL; newNode->prev=NULL;
        if(head==NULL) { head=newNode; temp=head; }
        else { temp->next=newNode; newNode->prev=temp; temp=newNode; }
    }
    cout<<"Enter element to search in the doubly linked list: "; cin>>key; temp=head;
    while(temp!=NULL) {
        if(temp->data==key) { cout<<"Element found at position "<<pos<<endl; found=1; break; }
        temp=temp->next; pos++;
    }
    if(!found) cout<<"Element not found in the doubly linked list\n";
    getch(); return 0;
}
