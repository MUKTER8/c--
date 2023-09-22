#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int value;
    cout<<"Enter the mark : ";
    cin>>value;

    if(value>=33){
        cout<<"PASS\n";
    }
    else{
        cout<<"FAIL\n";
    }

if(value>=80){
    cout<<"Grate : A+";

}
else if(value>=70){
    cout<<"Grate : A";
}
else if(value>=60){
    cout<<"Grate : A-";
}
else if(value>=50){
    cout<<"Grate : C";
}
else if(value>=33){
    cout<<"Grate :D ";
}
else{
    cout<<"F";
}

    getch();
}