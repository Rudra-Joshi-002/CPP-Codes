/* Print The Following Pattern Using Loops:

      *
    * * *
  * * * * *
* * * * * * *  Combination of Q-9 & Q-10
* * * * * * *
  * * * * *
    * * *
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
        for(int j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=(2*i-1);j++) //stars in each row increases by odd numbers
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    for(int i=num;i>0;i--)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}
