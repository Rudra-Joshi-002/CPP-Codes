/*Question 2 : WAP to print the multiplication table
of a number, entered by the user.*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a Integer Number To Know Its Multiplication Table (Upto 25 Natural Numbers): ";

    cin>>num;

    for(int i=1;i<26;i++)
    {
        cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
    }

    return 0;
}
