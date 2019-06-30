#include <iostream>
using namespace std;
int main()
{
    int num,i,c=0;
    cout<<"Enter The Number "<<endl;
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            c=c+1;
        }
    }
    if(c>0)
    {
        cout<<"The Entered Number Is Not Prime "<<endl;
    }
    else
    {
        cout<<"The Entered Number Is Prime "<<endl;
    }
    return 0;
}
