#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char let;
    cout <<"Enter any character: ";
    cin>> let;
    if((let>='a'&& let<='z')||(let>='A'&& let<='Z')){
        cout<<"It is a character"<<endl;
        if(let=='a'|| let=='e'|| let=='i'|| let=='o'|| let=='u' || let=='A' || let=='E' || let=='I' ||let=='O' || let=='U'){
        cout<<"It is a vowel"<<endl;

       }else {
        cout<<"It is a constant";

       }
    } else {

      cout<<"Not a character";
    }

}
