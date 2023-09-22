#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the value :";
    cin >>num1;
    cout<<"Enter the value :";
    cin >>num2;
    int sum=num1+num2;
    int sub=num1-num2;
    int multiply=num1*num2;
    double div=(float)num1/(float)num2;
    int rem=num1%num2;
    cout<<"SUM = "<<sum<<endl;
    cout<<"Subtraction = "<<sub<<endl;
    cout<<"Multiplication= "<<multiply<<endl;
    cout<<"Division = "<<div<<endl;
    cout<<"Remainder = "<<rem;

    getch();
}
