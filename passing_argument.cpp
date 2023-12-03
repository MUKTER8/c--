/*Two types of passing argument
Pass by value
Pass by reference
*/
#include<iostream>
using namespace std;
/*Pass by value*/
void display1(int num){
    num=20;
}
void display2(int *num){
    /* Pass by reference*/
    *num = 20;
}
int main(){
    int x=10;
    cout<<"Before calling the function x : "<<x<<endl;

    display1(x);
    cout<<"After calling the function x : "<<x<<endl;

    
    display2(&x);
    cout<<"After calling the function x : "<<x<<endl;
    


    }