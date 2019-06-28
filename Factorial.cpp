#include <iostream>
using namespace std;
int main()
{
    long int num,i,j,ans=1;
    cout<<"Enter The Number  ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
       ans=ans*i;
    }
    cout<<ans<<endl;
    return 0;


}
