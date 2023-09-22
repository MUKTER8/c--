#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,n,even_total=0,odd_total=0,total=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    i=1;
    while (i<=n)
    {
        total+=i;
        if(i%2==0){
            cout<<"\nEven number : "<<i;
            even_total+=i;
            
        }
        else{
            cout<<"\nOdd number : "<<i;
            odd_total+=i;

        }
        i++;
        
    }
     cout<<"\nTotal            : "<<total;
    cout<<"\nTotal even number : "<<even_total;
    cout<<"\nTotal even number : "<<odd_total;
    cout<<"\nTotal even+odd    : "<<(even_total+odd_total);


    getch();
}