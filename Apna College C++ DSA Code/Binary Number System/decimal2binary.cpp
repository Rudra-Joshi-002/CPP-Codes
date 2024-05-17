/*

The following is the code to convert Decimal Numbers into Binary Numbers.

*/

#include<iostream>

using namespace std;

int deci2bin(int val)
{
    int dummy=val,pow=1,temp,bin=0;

    while(dummy>0)
    {
        temp=dummy%2;

        dummy/=2;

        bin+=(temp*pow);

        pow*=10;
    }

    return bin;
}

int main()
{
    int num;

    cout<<"Enter any Positive Integer: ";

    cin>>num;

    cout<<"The binary of "<<num<<" = "<<deci2bin(num);

    return 0;
}
