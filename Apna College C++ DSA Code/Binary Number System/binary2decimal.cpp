/*

The following is the code to convert Binary Numbers into Decimal Numbers.

*/

#include<iostream>

using namespace std;

int bin2deci(int val)
{
    int dummy=val,pow=1,temp,deci=0;

    while(dummy>0)
    {
        temp=dummy%10;

        dummy/=10;

        deci+=(temp*pow);

        pow*=2;
    }

    return deci;
}

int main()
{
    int num;

    cout<<"Enter any binary Number: ";

    cin>>num;

    cout<<"The decimal of "<<num<<" = "<<bin2deci(num);

    return 0;
}

