/*

Question 3 : Print the Palindromic Pattern with Numbers.
For n = 5

          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
  5 4 3 2 1 2 3 4 5

*/

#include<iostream>

#include<cmath>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    for(int i=1;i<=num;i++)
    {
        int temp=i;

        for(int j=1;j<=num+1-i;j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<(i+1)-j<<" ";
        }

        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }


        cout<<endl;
    }

    return 0;

}


