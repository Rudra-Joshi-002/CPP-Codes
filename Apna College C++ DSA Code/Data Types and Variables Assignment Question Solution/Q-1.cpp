/*Question 1 : In a program, input the side of a square. You have to output the area of
the square.
Input : n (side)
Output : n*n (area)*/

#include<iostream>

using namespace std;

int main()
{
    float length;

    cout<<"Enter the length of Square: ";

    cin>>length;

    cout<<"\nArea Of Square Is: "<<(length*length);

    return 0;
}
