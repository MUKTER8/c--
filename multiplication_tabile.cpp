#include<iostream>
#include<conio.h>
using namespace std;
void multiply(int n){
    int i;
     for(i=1;i<=10;i++){
        cout<<"\n"<<n<<" * "<<i<<" = "<<i*n;
    }

}
int main(){
    int i,n,ch;
    
    do{
     cout<<"\nPress 1:Run program.\nPress any key : End the program.\nEnter your choice : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
         cout<<"\nEnter the value which you want to multiplication table : ";
         cin>>n;
         multiply(n);
         break;
    
    default:
          cout<<"End the program";
        break;
     } 
 }while (ch==1);

    getch();
}