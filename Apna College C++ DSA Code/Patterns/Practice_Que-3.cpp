/* Print The Following Pattern Using Loops:

* * * *
* * *
* *
*

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
        for(int j=1;j<=(num+1-i);j++) //see the "j" condition properly
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}
