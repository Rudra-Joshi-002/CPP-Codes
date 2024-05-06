/*Question 1: Write a C++ program to get a number from the user
and print whether it's positive,negative or zero*/

#include<iostream>

using namespace std;

int main()
{
    float num;

    cout<<"Enter Any Number: ";

    cin>>num;

    (num>0)?(cout<<"Number Entered Is Positive"):((num<0)?(cout<<"Number Entered Is Negative"):(cout<<"Number Entered Is Zero"));

    return 0;
}
