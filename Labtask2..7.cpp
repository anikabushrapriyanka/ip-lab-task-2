<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Input the number of classes held"<<endl;
    cin>>a;

    cout<<"Input the number of classes that were attended by the students: ";
    cin>>b;

    c=b/a;
    cout<<"The attendence of the student "<<c*100<<"%"<<endl;

    if(c>=8)

        cout<<"The student will be allowed to sit for an exam"<<endl;
    } else

        cout<<"The student will not be allowed to sit for an exam"<<endl;
         }
}
