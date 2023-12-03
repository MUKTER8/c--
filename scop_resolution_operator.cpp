#include<iostream>
using namespace std;
int y=100;
int x=10;//global variable
void display(){
        cout<<"Inside the display function x : "<<x<<endl;

}
int main(){
    int y=30;
    cout<< ::y<<endl;//Scop resolution -> ::

    cout<<"Inside the main function x : "<<x<<endl;
      display();

}