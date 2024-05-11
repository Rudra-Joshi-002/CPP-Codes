/*

Question 1 : Print the 0-1 Triangle Pattern.
For n = 5
1
01
101
0101
10101

*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    bool boolean;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            boolean=false;
        }

        else
        {
            boolean=true;
        }

        for(int j=1;j<=i;j++)
        {
            cout<<boolean;

            boolean=!(boolean);
        }

        cout<<endl;
    }

    return 0;

}
