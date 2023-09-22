#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    double farn,cels,K,C;
    cout<<"Enter celcious : ";
    cin>>cels;
    farn = (1.8*cels)+32;
    K=cels+273;
    C=(farn-32)/1.8;

    cout<<"Fahrenheit : "<<farn;
    cout<<"\nKelvin : "<<K;
    cout<<"\nCelsius :"<<C;


    getch();
}