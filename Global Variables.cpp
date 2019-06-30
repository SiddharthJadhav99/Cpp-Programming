#include <iostream>
using namespace std;
int global=5;
int main()
{
    int a,b;
    a=global+5;
    {
        global=10;
        b=global+2;
    }

    int c = ::global+4;
    cout<<a<<","<<b<<","<<c<<::global<<endl;
    return 0;
}

