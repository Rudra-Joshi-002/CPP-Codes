/*

Que-2 : To Print the maximum sum of a subarray for a given array

ex arr[]={2,-3,6,-5,4,2}

max sum that a subarray posses is 5.

Here we perform optimization  using Kadane's Algorithm To Reduce the time complexity to O{n} from O{n^2}

*/

#include<iostream>

using namespace std;

int print_max_sum_subarr(int arr[],int size)
{
    int maxm=INT_MIN,sum=0;

    for(int i=0;i<size;i++)
    {
        sum+=arr[i];

        maxm=max(maxm,sum);

        if(sum<0)
        {
            sum=0;
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
