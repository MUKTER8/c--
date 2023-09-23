#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,j,n,row,col;
    cout<<"Enter the value : ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(col=0;col<row;col++){
            cout<<"*";
        }
        cout<<"\n";
    }
    getch();

}
/*    *
     **
    *** 
    */