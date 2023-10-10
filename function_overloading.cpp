#include<iostream>
#include<conio.h>
using namespace std;
void sum(int a ,int b){
    int sum=a+b;
    cout<<"Result : "<<sum<<endl;
}
void sum(int a, int b,int c){
    int add=a+b+c;
    cout<<"Result : "<<add<<endl;
}
int main(){
    sum(20,30,20);
    sum(30,30);

    getch();
}