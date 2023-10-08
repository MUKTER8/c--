#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value a :";
    cin>>a;
     cout<<"Enter the value a :";
    cin>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int sum=*p1+*p2;
    cout<<a<<" + "<<b<<" = ";
    cout<<sum;
}