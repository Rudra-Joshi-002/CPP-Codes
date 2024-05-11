/* Print The Following Pattern Using Loops:

*             *
* *         * *
* * *     * * *
* * * * * * * *

*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    for(int i=1;i<num+1;i++)
    {

        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        for(int j=1;j<=2*(num-i);j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        cout<<endl;

    }

    return 0;

}
