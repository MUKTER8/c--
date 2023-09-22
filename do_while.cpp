#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,n,sq,total=0,sum=0;
    cout<<"Enter the value : ";
    cin>>n;
    i=1;
    do{
        cout<<"\n"<<i<<"="<<i*i;
        total+=i;
        sq=i*i;
        sum+=sq;

        i++;
        
    }while (i<=n);
    cout<<"\nSum of number = Sum of squere";

    cout<<"\n"<<total<<"  =  "<<sum;


    getch();
}