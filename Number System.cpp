#include <iostream>
using namespace std;

int decToBin(int n)
{
    int a[25],i;

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
    cout<<a[i];
    }
    return a[25];
}
int decToOct(int n)
{
    int a[25],i;

    for(i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }
    for(i=i-1;i>=0;i--)
    {
    cout<<a[i];
    }
    return a[25];
}
int decToHex(int n)
{
    char a[25];
    int i=1;
    int r;
      while (n!= 0)
    {
        r = n % 16;
        if (r < 10)
            a[i++] = r + 48;
        else
            a[i++] = r + 55;
        n = n / 16;
    }

    for (i = i-1; i > 0; i--)
    {
        cout << a[i];
    }

     return a[25];
}


int main()
{
    int oper;
    int dec;
    int ans;
    cout<<"Enter the decimal value "<<endl;
    cin>>dec;
    cout<<"What conversion would you like to perform ? \n 1. Decimal to Binary \n 2. Decimal to Octal \n 3. Decimal to Hexadecimal \n "<<endl;
    cin>>oper;
    cout<<endl;
     cout<<"The Conversion of "<<dec<<" in Binary is "<<endl;
    switch(oper)
    {
         case 1 : decToBin(dec);
         cout<<endl;
         break;

        case 2 :decToOct(dec);
        cout<<endl;
        break;

        case 3 :decToHex(dec);
        cout<<endl;
        break;
    }
    return 0;
}
