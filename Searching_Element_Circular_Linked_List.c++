#include <iostream.h>
#include <conio.h>
struct Node { int data; Node *next; };
int main() {
    Node *head=NULL,*newNode,*temp; int n,i,value,key,pos=1,found=0; clrscr();
    cout<<"Enter number of nodes (0-100): "; cin>>n;
    if(n<0||n>100) { cout<<"Invalid number of nodes."; getch(); return 0; }
    for(i=0;i<n;i++) {
        newNode=new Node; cout<<"Enter data: "; cin>>value; newNode->data=value;
        if(head==NULL) { head=newNode; temp=head; newNode->next=head; }
        else { newNode->next=head; temp->next=newNode; temp=newNode; }
    }
    cout<<"Enter element to search: "; cin>>key;
    if(head!=NULL) {
        temp=head;
        do {
            if(temp->data==key) { cout<<"Element found at position "<<pos<<endl; found=1; break; }
            temp=temp->next; pos++;
        } while(temp!=head);
    }
    if(!found) cout<<"Element not found"<<endl;
    getch(); return 0;
}