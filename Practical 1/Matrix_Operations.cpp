#include <iostream.h>
#include <conio.h>
int main() {
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k,choice; clrscr();
    cout<<"Enter rows and columns for first matrix (1-10): "; cin>>r1>>c1;
    if(r1<1||r1>10||c1<1||c1>10) { cout<<"Invalid matrix dimensions."; getch(); return 0; }
    cout<<"Enter elements of first matrix:\n";
    for(i=0;i<r1;i++) for(j=0;j<c1;j++) cin>>a[i][j];
    do {
        cout<<"\n--- MENU ---\n1. Matrix Addition\n2. Matrix Multiplication\n3. Matrix Transpose\n4. Exit\nEnter your choice: "; cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Enter rows and columns for second matrix: "; cin>>r2>>c2;
                if(r1!=r2||c1!=c2) { cout<<"Addition is not possible\n"; break; }
                cout<<"Enter elements of second matrix:\n";
                for(i=0;i<r2;i++) for(j=0;j<c2;j++) cin>>b[i][j];
                cout<<"Addition of matrices:\n";
                for(i=0;i<r1;i++) { for(j=0;j<c1;j++) { c[i][j]=a[i][j]+b[i][j]; cout<<c[i][j]<<" "; } cout<<endl; }
                break;
            case 2:
                cout<<"Enter rows and columns for second matrix: "; cin>>r2>>c2;
                if(c1!=r2||r2<1||r2>10||c2<1||c2>10) { cout<<"Multiplication not possible or dimensions invalid\n"; break; }
                cout<<"Enter elements of second matrix:\n";
                for(i=0;i<r2;i++) for(j=0;j<c2;j++) cin>>b[i][j];
                for(i=0;i<r1;i++) for(j=0;j<c2;j++) { c[i][j]=0; for(k=0;k<c1;k++) c[i][j]+=a[i][k]*b[k][j]; }
                cout<<"Multiplication of matrices:\n";
                for(i=0;i<r1;i++) { for(j=0;j<c2;j++) cout<<c[i][j]<<" "; cout<<endl; }
                break;
            case 3:
                cout<<"Transpose of first matrix:\n";
                for(j=0;j<c1;j++) { for(i=0;i<r1;i++) cout<<a[i][j]<<" "; cout<<endl; }
                break;
            case 4: cout<<"Program exited successfully\n"; break;
            default: cout<<"Invalid choice. Please try again.\n";
        }
    } while(choice!=4);
    getch(); return 0;
}
