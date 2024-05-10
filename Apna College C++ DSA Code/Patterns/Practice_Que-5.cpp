/* Print The Following Pattern Using Loops:

A
B C
D E F
G H I J

*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    char ch='A';

    cout<<"Enter A Integer Number: ";

    cin>>num;

    for(int i=1;i<num+1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch++<<" "; //see the variable in cout carefully
        }

        cout<<endl;
    }

    return 0;
}

