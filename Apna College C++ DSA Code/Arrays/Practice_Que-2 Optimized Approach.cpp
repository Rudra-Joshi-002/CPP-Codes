/*

Que-2 : To Print the maximum sum of a subarray for a given array

ex arr[]={2,-3,6,-5,4,2}

max sum that a subarray posses is 5.

Here we perform optimization as compared to previous code which is instead of calculating sum for each subarray
And then comparing it to maxm and using 3-loops we will try to do the same task with 2-loops thus reducing
the time complexity of the  program to O{n^2} from O{n^3}

*/

#include<iostream>

using namespace std;

int print_max_sum_subarr(int arr[],int size)
{
    int maxm=INT_MIN;

    for(int i=0;i<size;i++)
    {
        int sum=0;

        for(int j=i;j<size;j++)
        {
            sum+=arr[j];

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

