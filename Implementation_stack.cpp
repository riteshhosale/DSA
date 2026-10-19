#include <iostream.h>
#include <conio.h>
int stk[5],top=-1,data;
void push(); void pop();
int main() {
    int ch; clrscr();
    do {
        cout<<"\n--- MENU ---\n1. PUSH\n2. POP\n3. EXIT\nEnter your choice: "; cin>>ch;
        switch(ch) { case 1: push(); break; case 2: pop(); break; case 3: cout<<"Program exited successfully\n"; break; default: cout<<"Invalid choice. Please try again.\n"; }
    } while(ch!=3);
    getch(); return 0;
}
void push() { if(top==4) { cout<<"Stack is Overflow\n"; return; } cout<<"Enter data to push: "; cin>>data; stk[++top]=data; }
void pop() { if(top==-1) { cout<<"Stack is Underflow\n"; return; } cout<<"Deleted element is "<<stk[top]<<endl; top--; }