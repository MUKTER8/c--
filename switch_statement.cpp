#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int digit;
    char ch;
    cout<<"Enter the digit : ";
    cin>>digit;
    cout<<"Enter any letter : ";
    cin>>ch;

    switch (digit)
    {
    case 0:
          cout<<"Zerro";

        break;
    case 1:
          cout<<"One";

        break;
    case 2:
          cout<<"Two";

        break;
    case 3:
          cout<<"Three";

        break;
    case 4:
          cout<<"Four";

        break;
    case 5:
          cout<<"Five";

        break;
    case 6:
          cout<<"Six";

        break;
    case 7:
          cout<<"Seven";

        break;
    case 8:
          cout<<"Eight";

        break;
    case 9:
          cout<<"Nine";

        break;
    
    default:
        break;
    }
  
ch=tolower(ch);

 switch (ch)
    {
    case 'a':
          cout<<"\nVowel";

        break;
    case 'e':
          cout<<"\nVowel";

        break;
    case 'i':
          cout<<"\nVowel";

        break;
    case 'o':
          cout<<"\nVowel";

        break;
    case 'u':
          cout<<"\nVowel";

        break;
    default :
          cout<<"\nConsonent";

        break;
    }
    getch();
}