#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,row,column;
    cout<<"Enter of number of lines : ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(column=1;column<=row;column++){
            cout<<" "<<column;
        }
        cout<<"\n";
    }
    getch();
}
/*1
1 2
1 2 3
1 2 3 4*/