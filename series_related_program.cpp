#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main(){
     long double i,sum=0,n,t_sq=0;
    /*1+2+3+4+.....+n=?
      1^2+2^2+3^2+...+n^2=?*/
    cout<<"Enter the number of value : ";
    cin>>n;
    i=1;
    while (i<=n)
    {
        sum+=i;
        t_sq=t_sq+pow(i,2);
        i++;
    }
    cout<<"Total    : "<<sum;
    cout<<"\nSummesion of Squere : "<<t_sq;
    getch();
    
}