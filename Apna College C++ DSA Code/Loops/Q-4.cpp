/*Question 4 : For a positive N , WAP that prints all the prime numbers from 2 to N.

(Assume N >= 2)
*/

#include<iostream>

#include<cmath>

using namespace std;

int main()
{
    int num;

    bool is_prime=true;

    cout<<"Enter a integer number: ";

    cin>>num;

    cout<<"Prime Numbers in the Range 2 to "<<num<<" are: "<<endl;

    for(int i=2;i<=num;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                is_prime=false;

                break;
            }
        }

        if(is_prime==true)
        {
            cout<<i<<" ";
        }

        is_prime=true;
    }

    return 0;
}
