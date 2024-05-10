/* Q-2 Print the Sum of digits of a Number using while loop*/

#include<iostream>

using namespace std;

int main()
{
    int num,temp,sum=0;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    int dummy=num;

    while(dummy>0)
    {
        temp=dummy%10;

        dummy/=10;

        sum+=temp;
    }

    cout<<"The value of Sum of Digits of "<<num<<" = "<<sum;

    return 0;
}
