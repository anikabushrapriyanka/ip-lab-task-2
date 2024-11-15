#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any absolute number : ";
    cin>>num;
    if(num>=0)
    {
        cout<<"The number is absolute number " << num<<endl;

    } else {
    cout<<"The number is ansolute number "<< num *(-1);}
}
