/*

Que-2 : To Print the maximum sum of a subarray for a given array

ex arr[]={2,-3,6,-5,4,2}

max sum that a subarray posses is 5.

*/

#include<iostream>

using namespace std;

int print_max_sum_subarr(int arr[],int size)
{
    int maxm=INT_MIN;

    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            int sum=0;

            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }

            maxm=max(maxm,sum);
        }
    }

    return maxm;
}

int main()
{
    int array[]={2,-3,6,-5,4,2};

    int n=(sizeof(array)/sizeof(int));

    cout<<"The maximum sum for the Subarrays of Array {2,-3,6,-5,4,2}: "<<print_max_sum_subarr(array,n);

    return 0;
}
