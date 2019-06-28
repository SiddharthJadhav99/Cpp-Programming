#include <iostream>
using namespace std;
int main()
{
    int a[10],b,c,i;
    cout<<"Enter The Decimal Number \n";
    cin>>b;
    for(i=0;i>0;i++)
    {
        a[i]=b%2;
        b=b/2;
    }
    for(i=i-1;i>=0;i--)
    {
        c=a[i];
    }
    cout<<"The Binary Of Decimal Number is "<<c<<"\n";
    return 0;
}
