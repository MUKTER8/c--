#include<iostream>
using namespace std;
int factorail(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*(n-1);
    }

}
int main(){
    int n,fact;
    cout<<"Enter the value : ";
    cin>>n;
   fact= factorail(n);
cout<<"Factorial : "<<fact;
}