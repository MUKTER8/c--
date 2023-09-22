#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,n,total=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for ( i =1; i <= n; i++)
    {
        cout<<"\n"<<i;
        total=total+i;
    }
    cout<<"\nTotal : "<<total;
    getch();
}