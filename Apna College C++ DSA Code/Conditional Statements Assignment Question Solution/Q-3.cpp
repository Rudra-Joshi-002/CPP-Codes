/*Question 3 : For any 3 digit number check whether it’s an Armstrong number or not.
Armstrong number is a number that is equal to the sum of cubes of its digits.
Eg : 371 is an armstrong number.
3*3*3 + 7*7*7 + 1*1*1 = 371*/

#include<iostream>

using namespace std;

int main()
{
    int num,n100,n10,n1;

    cout<<"Enter A 3-Digit Number: ";

    cin>>num;

    n100=num/100;

    n10=(num%100)/10;

    n1=num%10;

    n100=n100*n100*n100;

    n10=n10*n10*n10;

    n1=n1*n1*n1;

    if(num==(n100+n10+n1))
    {
        cout<<"Number "<<num<<" is a Armstrong Number";
    }

    else
    {
        cout<<"Number "<<num<<" is not a Armstrong Number";
    }

    return 0;
}

