/* Print The Following Pattern Using Loops:

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

*/

#include<iostream>

using namespace std;

int main()
{
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}
