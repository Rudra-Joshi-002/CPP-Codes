/*

Question 4 : Write a function that prints the largest of 3 numbers.

*/

#include<iostream>

using namespace std;

double largest(double a,double b,double c)
{
    return ((a>b)?((a>c)?a:c):((b>c)?b:c));
}

int main()
{
    double num1,num2,num3;

    cout<<"Enter any 3 Numbers: ";

    cin>>num1>>num2>>num3;

    cout<<"Largest of "<<num1<<", "<<num2<<", "<<num3<<" is: "<<largest(num1,num2,num3);

    return 0;

}
