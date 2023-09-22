#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    /*comma(,)
    pointer(*)
    sizeof()*/

    int a,x,y,sum;
    sum=(x=10,y=20,sum =x+y);
    float f;
    double d;
    char ch;
    char name[10];
    int inta[10];
      int c1=sizeof(a);
      int c2=sizeof(f);
      int c3=sizeof(d);
      int c4=sizeof(ch);
      int c5=sizeof(name);
      int c6=sizeof(inta);

      cout<<"Size of int : "<<c1;
      cout<<"\nSize of float : "<<c2;
      cout<<"\nSize of double : "<<c3;
      cout<<"\nSize of char : "<<c4;
      cout<<"\nSize of char array : "<<c5;
      cout<<"\nSize of char array : "<<c6;
    
     cout<<"\nSUM : "<<sum;

    getch();
}