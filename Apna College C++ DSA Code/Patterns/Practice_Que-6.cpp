/* Print The Following Pattern Using Loops:

* * * * *
*       *
*       *
*       *
* * * * *

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
        cout<<"* ";

        for(int j=1;j<num-1;j++) //think in terms of character + special characters (ex: white spaces) + characters
        {                        //for each row and column
            if(i==1 || i==num)
            {
                cout<<"* ";
            }

            else
            {
                cout<<"  ";
            }
        }

        cout<<"*"<<endl;
    }

    return 0;
}

