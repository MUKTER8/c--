#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    double base,height,tarea,sq,rect,cir;
    cout<<"Enter the base b / a / r :";
    cin>>base;
    cout<<"Enter the height or h :";
    cin>>height;
    tarea=1.0/2*base*height;
    sq=base*base;
    rect=base*height;
    cir=3.1416*base;
    cout<<"Area of triangle : "<<tarea;
    cout<<"\nArea of square : "<<sq;
    cout<<"\nArea of rectangular : "<<rect;
    cout<<"\nArea of circle : "<<cir;
    getch();
}