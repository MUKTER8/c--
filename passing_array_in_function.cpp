#include<iostream>
using namespace std;
void display(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<< " ";
    }

}
int main(){
    int array[5]={10,20,30,40,50};
    display(array,5);
}