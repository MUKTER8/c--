#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){
    for(int i=0;i<5;i++){
    int randomnumber=rand()%5+1;
    cout<<"\nRandomnuber : "<<randomnumber;
    }

}