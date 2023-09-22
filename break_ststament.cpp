#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the value n : ";
    cin>>n;

    for(i=0;i<n;i++){
        if(i %2==0){
           continue;
        }
        if(i==50){
            break;

        }
        cout<<"\n "<<i;
    }
    getch();
}