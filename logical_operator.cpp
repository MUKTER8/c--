#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter the value a : ";
    cin>>a;
    cout<<"Enter the value b : ";
    cin>>b;
    cout<<"Enter the letter : ";
    cin>>ch;

    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' ||ch=='u'){
        cout<<"\nVowel";
    }
    else if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' ||ch=='U'){
        cout<<"\nVowel";
    }
    else{
        cout<<"\nConsonant";
    }

    if(a>b){
        cout<<"Capital a : "<<a;
        cout<<"\nLower b : "<<b;
    }
    else if(a<b){
        cout<<"Capital b : "<<b;
        cout<<"\nLower a : "<<a;
    }
    else{
        cout<<"\nSame value (a=b) : "<<a;
        
    }

    getch();
}