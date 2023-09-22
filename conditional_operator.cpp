/*
conditional operator/ternary operator
(? :)

Expression1?Experssion2:experssion3

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the value 1 : ";
    cin>>num1;
    cout<<"Enter the value 2 : ";
    cin>>num2;

    int max = (num1 > num2) ? num1 : num2;
    cout<<"Max value : "<<max;
    (num1 % 2==0) ? cout<<"\n1st value is even : "<<num1: cout<<"\n1st value is odd : "<<num1;
    (num2 % 2==0) ? cout<<"\n2nd value is even : "<<num2: cout<<"\n2nd value is odd : "<<num2;


    getch();
}