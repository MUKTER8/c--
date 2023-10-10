#include<iostream>
using namespace std;
void square(int n){
    int result = n*n;
    cout<<"Square = "<<result;
}

int main(){
    int n;
    cout<<"Enter the value of square :";
    cin>>n;
    square(n);

}