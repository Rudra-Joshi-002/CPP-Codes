/*

Question 3 : Write a function which takes 2 numbers as parameters (a & b) and
outputs : a^2 + b^2 + 2*ab.

*/

#include<iostream>

using namespace std;

double whole_sq(double a,double b)
{
    return ((a*a)+(b*b)+(2*a*b));
}

int main()
{
    double num1,num2;

    cout<<"Enter two numbers: ";

    cin>>num1>>num2;

    cout<<"Value of ( "<<num1<<" + "<<num2<<" )^2 = "<<whole_sq(num1,num2);

    return 0;
}
