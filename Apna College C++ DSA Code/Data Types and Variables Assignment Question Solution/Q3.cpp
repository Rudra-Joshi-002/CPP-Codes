/*Question 3 : Build a Simple Interest Calculator.
Input : principal (P), rate (R), time (T)
Output : (P*R*T) / 100
*/

#include<iostream>

using namespace std;

int main()
{
    float principal,rate,time,interest;

    cout<<"Enter the amount of principal: ";

    cin>>principal;

    cout<<"\nEnter the rate of interest: ";

    cin>>rate;

    cout<<"\nEnter the amount of time for which Interest is to be calculated: ";

    cin>>time;

    interest=(principal*rate*time)/100;

    cout<<"\nThe Interest for the entered values of parameters is: "<<interest;

    return 0;
}
