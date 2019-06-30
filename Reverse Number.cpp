#include <iostream>
using namespace std;
int main()
{
    int num,i,rem,rev=0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    cout<<"The reverse number is "<<rev<<endl;
    return 0;
}
