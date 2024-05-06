/*Question 2 : Write a C++ program that takes a year from the user and print whether
that year is a leap year or not.*/

#include<iostream>

using namespace std;

int main()
{
    int year,cent,leap;

    cout<<"Enter a Year: ";

    cin>>year;

    cent=year/100;

    cent*=100;

    leap=year-cent;

    if(leap==0 && year%400==0)
    {
        cout<<"\nYear "<<year<<" Is a Leap Year";
    }

    else if(year%4==0 && leap!=0)
    {
        cout<<"\nYear "<<year<<" Is a Leap Year";
    }

    else
    {
        cout<<"\nYear "<<year<<" Is not a Leap Year";
    }

    return 0;
}
