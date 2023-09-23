#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    int array[10][10],i,j,n,tmp;
    cout<<"Enter the number of input : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>array[i][j];
        }
    }

 for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<" "<<array[i][j];
        }
        cout<<"\n";
    }

    getch();
}