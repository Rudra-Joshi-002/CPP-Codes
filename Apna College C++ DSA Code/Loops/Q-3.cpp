/*Question 3 : WAP to input a number and check whether the number is an Armstrong
number or not.

An Armstrong number is a number that is equal to the sum of cubes of its digits.*/

#include<iostream>

using namespace std;

int main()
{
    int num,dummy,temp,sum=0;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    dummy=num;

    while(dummy>0)
    {
        temp=dummy%10;

        dummy=dummy/10;

        sum=sum+(temp*temp*temp);
    }

    if(sum==num)
    {
        cout<<num<<" Is a Armstrong Number";
    }
    else
    {
        cout<<num<<" Is not a Armstrong Number";
    }

    return 0;
}
