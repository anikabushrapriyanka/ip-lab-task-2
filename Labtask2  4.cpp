#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3,smallest;
    cout<<"Enter three integer number: "<<endl;
    cin>>num1>>num2>>num3;

    if(num1<num2&&num1<num3){
            cout<<"The smallest number is : "<< num1 << endl;
            smallest=num1;

    } else if(num2<num1&&num2<num3){
            cout<<"The smallest number is :  "<< num2 << endl;
            smallest=num2;

    } else {
            cout<<"The smallest number is :  "<< num3 << endl;
            smallest=num3;

    }
    if(smallest%2==0){
           cout<<"Smallest number is even"<<endl;
    } else {
           cout<<"Smallest number is odd"<<endl;
    }













}

