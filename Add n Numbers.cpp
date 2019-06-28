#include <iostream>
using namespace std;
int main()
{
    int num,i,s=0;
    cout<<"Enter The Number";
    cin>>num;
    if(num<0)
    {
        cout<<"Please Enter A Positive Number";
    }
    else
    {
        for(i=1;i<=num;i++)
        {
            s=s+i;
        }
        cout<<"The Sum Of First Positive "<<num<<" numbers is "<<s<<endl;
    }
    return 0;
}
