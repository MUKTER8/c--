#include<iostream>
using namespace std;
int Input(int &n1,int &n2){
         cout<<"Enter the value of a : ";
         cin>>n1;
         cout<<"Enter the value of a : ";
         cin>>n2;

}
void Addition(int a, int b){
    int sum=a+b;
    cout<<"Addition : "<<sum<<endl;
}
void Difference(int a,int b){
    int Diff=a-b;
    cout<<"Difference : "<<Diff<<endl;
}
void Multiply(int a,int b){
    int multy=a*b;
    cout<<"Multiplecation : "<<multy<<endl;
}
void Division(int a,int b){
    float div=a/b;
    cout<<"Division : "<<div<<endl;
}
void Remainder(int a,int b){
    int rim=a%b;
    cout<<"Remainder : "<<rim<<endl;
}
int main(){
    int n1,n2;
    char ch;
    do{
        cout<<"Enter your Choice:prees:[+,-,*,/,% ]OR Prees 0:[End Program]:";
        cin>>ch;
        switch (ch)
        {
            case '+':
                 Input(n1,n2);
                 Addition(n1,n2);
            break;
            case '-':
                 Input( n1, n2);
                 Difference(n1,n2);
            break;
            case '*':
                 Input( n1, n2);
                 Multiply(n1,n2);
            break;
            case '/':
                 Input( n1,n2);
                 Division(n1,n2);
            break;
            case '%':
                 Input( n1, n2);
                 Remainder(n1,n2);
            break;
            case '0':
                 cout<<"Program End.";
            break;
        default:
             cout<<"Invalid choice.\n";
         break;
        }
    }while(ch!=0);
}

