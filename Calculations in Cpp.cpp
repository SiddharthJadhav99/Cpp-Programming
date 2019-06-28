#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g;
    cout<<"Enter Two Numbers \n";
    cin>>a>>b;
    c=a+b;
    d=a-b;
    e=a/b;
    f=a*b;
    g=(int)a%(int)b;
    cout<<"The Addition is " <<c<< "\n";
    cout<<"The Subtraction is " <<d<< "\n";
    cout<<"The Division is " <<e<< "\n";
    cout<<"The Multiplication is " <<f<< "\n";
    cout<<"The Remainder is " <<g<< "\n";
    return 0;
}
