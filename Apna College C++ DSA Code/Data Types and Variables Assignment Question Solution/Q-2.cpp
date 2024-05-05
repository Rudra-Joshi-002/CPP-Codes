/*Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a
pen and an eraser. You have to output the total cost of the items back to the user as
their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced
problem)*/

#include<iostream>

using namespace std;

int main()
{
    float item1,item2,item3,sum,bill;

    cout<<"Enter the cost of 3-Items: \n";

    cin>>item1>>item2>>item3;

    sum=item1+item2+item3;

    bill=sum+(0.18*sum);

    cout<<"\nYour Bill Including 18% GST is: "<<bill;

    return 0;
}
