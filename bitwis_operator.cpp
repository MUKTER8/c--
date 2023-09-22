#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,c1,c2,c3,c4,c5,c6;

cout<<"Enter the value a : ";
cin>>a;
cout<<"Enter the value b: ";
cin>>b;
c1=a&b;
c2=a|b;
c3=a^b;
c4=a >> b;
c5=a << b;
cout<<"AND = "<<c1;
cout<<"\nOR = "<<c2;
cout<<"\nXOR = "<<c3;
cout<<"\nRight shift = "<<c4;
cout<<"\nLeft shift = "<<c5;

    getch();
}