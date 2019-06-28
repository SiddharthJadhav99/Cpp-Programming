#include <iostream>
using namespace std;
int main()
{
    int a[10],b,i;
    cout<<"Enter The Decimal Number \n";
    cin>>b;
    for(i=0;b>0;i++)
    {
        a[i]=b%2;
        b=b/2;
    }
    for(i=i-1;i>=0;i--)
    {
    cout<<a[i];
    }

    return 0;
}
