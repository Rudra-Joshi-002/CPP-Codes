/*

Question 2 : Print the Rhombus Pattern.
For n = 5

    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *

*/

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Enter a Integer Number: ";

    cin>>num;

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=num;j++)
        {
            cout<<" *";
        }

        cout<<endl;
    }

    return 0;
}
