/*Question 4 : Write a program to calculate the area of a circle.
Input : r (radius)
Output : PI*r*r (area)
*/

#include<iostream>

using namespace std;

int main()
{
    float radius,area;

    cout<<"Enter the Radius of Circle: ";

    cin>>radius;

    area=3.14*radius*radius;

    cout<<"\nThe Area of Circle is: "<<area;

    return 0;
}
