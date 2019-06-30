#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2;
    cout<<"Enter The Values Of a,b,c as in ax2+bx+c=0"<<endl;
    cin>>a>>b>>c;
    if(b*b<4*a*c)
    {
        cout<<"The value Of b2 cannot exceed value of 4ac for natural roots"<<endl;
    }
    else
    {
     x1=(-b+(sqrt(b*b-4*a*c)))/2*a;
     x2=(-b-(sqrt(b*b-4*a*c)))/2*a;
     cout<<"The Roots Of The Equation are "<<x1<<" and "<<x2<<endl;
    }

    return 0;
}
