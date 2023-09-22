#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int array[20],i,j,n,sum=0,avg,max,min;
    cout<<"Enter the number of student : ";
    cin>>n;
    cout<<"Enter the student mark : ";
    for(i=0;i<n;i++){
        cin>>array[i];
        sum+=array[i];
    }
    avg=(float)sum/n;
    max=array[0];
    min=array[0];
    for(i=0;i<n;i++){
        if(max<=array[i]){
            max=array[i];
        }
        if(min>=array[i]){
            min=array[i];
        }
        
    }
    cout<<"Mximum mark  : "<<max<<endl;
    cout<<"Minimum mark : "<<min<<endl;
    cout<<"Average mark : "<<avg;
}