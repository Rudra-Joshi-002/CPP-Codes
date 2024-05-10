/* Q-5: Reverse a given number and print the result*/

#include<iostream>

using namespace std;

int main()
{
    int num,temp,rnum=0;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    while(num>0)
    {
        temp=num%10;

        rnum=rnum*10+temp;

        num/=10;
    }

    cout<<"The Entered Number In Reverse Order Is: "<<rnum;

    return 0;

}
