#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int array[10],n,i,j,temp,sum=0;
    cout<<"How many element to input : ";
    cin>>n;
    cout<<"Enter the element : ";
    for( i=0;i<n;i++){
        cin>>array[i];
        sum+=array[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            }

        }
    }
    cout<<"Assesending order :";
   for(i=0;i<n;i++){
        cout<<"  "<<array[i];
    }
    cout<<"\nDessending order  :";
    for(i=n-1;i>=0;i--){
        cout<<"  "<<array[i];

    }
    cout<<"\nTotal : "<<sum;
    getch();
}