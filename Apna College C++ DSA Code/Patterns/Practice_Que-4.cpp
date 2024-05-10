/* Print The Following Pattern Using Loops:

1
1 2
1 2 3
1 2 3 4

*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter A Integer Number: ";

    cin>>num;

    for(int i=1;i<num+1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" "; //see the variable in cout carefully
        }

        cout<<endl;
    }

    return 0;
}

