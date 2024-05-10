/* Print The Following Pattern Using Loops:

1
2 3
4 5 6
7 8 9 10

*/

#include<iostream>

using namespace std;

int main()
{
    int num,temp=1;

    cout<<"Enter A Integer Number: ";

    cin>>num;

    for(int i=1;i<num+1;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<temp++<<" ";
        }

        cout<<endl;
    }

    return 0;
}


