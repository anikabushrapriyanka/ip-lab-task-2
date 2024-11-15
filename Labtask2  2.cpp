#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char gen;
    cout<<"Input a gender : ";
    cin>>gen;
    if(gen=='M' || gen=='m')
    {
        cout<<"Gender is male"<<endl;
    } else if(gen=='F' || gen=='f')
    {
    cout<<"Gender is female";
    } else{
    cout<<"undefined";
    }
}
