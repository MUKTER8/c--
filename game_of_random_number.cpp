#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;


int main(){
    int guessnumber,randomnumber;
    while (1)
    {
        cout<<"Enter your guess number between (1 to 5) : ";
    cin>>guessnumber;
   randomnumber=rand()%5+1;
   if(guessnumber==randomnumber){
    cout<<"Win"<<endl;
   }
   else{
    cout<<"Try again..."<<endl;
    cout<<"Randomnumber was :"<<randomnumber<<endl;
   }
    }
    
   
getch();
}