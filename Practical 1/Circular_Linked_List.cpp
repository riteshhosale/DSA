#include <iostream.h>
#include <conio.h>
struct Node { int data; Node *next; };
int main() {
    Node *head=NULL,*newNode,*temp; int n,i,value; clrscr();
    cout<<"Enter the number of nodes (0-100): "; cin>>n;
    if(n<0||n>100) { cout<<"Invalid number of nodes."; getch(); return 0; }
    for(i=0;i<n;i++) {
        newNode=new Node; cout<<"Enter data for node: "; cin>>value; newNode->data=value;
        if(head==NULL) { head=newNode; temp=head; newNode->next=head; }
        else { newNode->next=head; temp->next=newNode; temp=newNode; }
    }
    cout<<"\nCircular Linked List Elements: ";
    if(head!=NULL) { temp=head; do { cout<<temp->data<<" -> "; temp=temp->next; } while(temp!=head); }
    cout<<"(back to head)\n"; getch(); return 0;
}