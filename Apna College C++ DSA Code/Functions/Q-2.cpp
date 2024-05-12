/*

Question 2 : Write a function to calculate the sum of digits of a number.

*/

#include<iostream>

using namespace std;

int sum_of_digi(int val)
{
    int dummy=val,sum=0,temp;

    while(dummy>0)
    {
        temp=dummy%10;

        dummy/=10;

        sum=sum+temp;
    }

    return sum;
}

int main()
{
    int num;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    cout<<"The Sum Of Digits Of "<<num<<" = "<<sum_of_digi(num);

    return 0;
}
