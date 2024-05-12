/*

Question 1 : Write a function to check if a number is a palindrome in C++.
(121 is a palindrome, 321 is not)
A number is called a palindrome if the number is equal to the reverse of a number.
Eg : 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand,
321 is not a palindrome because the reverse of 321 is 123, which is not equal to 321.

*/

#include<iostream>

using namespace std;

bool is_palindrome(int val)
{
    int rnum=0,dummy=val,temp;

    while(dummy>0)
    {
        temp=dummy%10;

        dummy/=10;

        rnum=rnum*10+temp;
    }

    if(rnum==val)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int num;

    bool result;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    result=is_palindrome(num);

    if(result==true)
    {
        cout<<num<<" is Palindrome";
    }

    else
    {
        cout<<num<<" is not Palindrome";
    }

    return 0;

}
