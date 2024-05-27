/*

Que-1 : Print Subarrays Of a given array.

ex arr=[1,2,3,4,5]

Subarrays:

(1),(1,2),(1,2,3),(1,2,3,4),(1,2,3,4,5)
(2),(2,3),(2,3,4),(2,3,4,5)
(3),(3,4),(3,4,5)
(4),(4,5)
(5)

also the number of possible subarrays of give array is

(n*(n+1))/2 where n is size of array

also notice that the formula is of sum of n integers as well...

*/

#include<iostream>

using namespace std;

void print_subarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            cout<<" ( ";
            for(int k=i;k<=j;k++)
            {
                if(k!=j)  //for proper "," formatting
                {
                    cout<<arr[k]<<" ,";
                }
                else
                {
                    cout<<arr[k];
                }
            }

            if(j!=(size-1))  //same logic as above formatting things
            {
                cout<<" ), ";
            }
            else
            {
                cout<<" )";
            }
        }

        cout<<endl;
    }
}

int main()
{
    int array[]={1,2,3,4,5};

    int n=(sizeof(array)/sizeof(int));

    print_subarr(array,n);

    return 0;
}
