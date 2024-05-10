/* Q-4 Print the digits of a given number in reverse using while loop*/

#include<iostream>

using namespace std;

int main()
{
    int num,temp;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    cout<<"The Entered Number In Reverse Order Is: ";

    while(num>0)
    {
        temp=num%10;

        num/=10;

        cout<<temp;
    }

    return 0;
}
