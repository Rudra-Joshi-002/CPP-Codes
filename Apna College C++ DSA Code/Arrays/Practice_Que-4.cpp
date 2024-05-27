/*

To See the visual data see the following link: https://leetcode.com/problems/trapping-rain-water/description/

Que-4: Trapping Rainwater

Given n non-negative integers representing an elevation map where the width of each bar is 1,
compute how much water it can trap after raining.

Example 1:

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6


Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section)
are being trapped.

Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9

*/

#include<iostream>

using namespace std;

int compute_rainwater(int *ht,int size)
{
    int ht_left_max[20000],ht_right_max[20000],minht,trap=0;

    ht_left_max[0]=INT_MIN;

    ht_right_max[size-1]=INT_MIN;

    for(int i=1;i<size;i++)
    {
        ht_left_max[i]=max(ht_left_max[i-1],ht[i-1]);
    }


    for(int i=size-2;i>=0;i--)
    {
        ht_right_max[i]=max(ht_right_max[i+1],ht[i+1]);
    }

    for(int i=1;i<size-1;i++)
    {
        minht=min(ht_left_max[i],ht_right_max[i]); //here subtracting something from INT_MIN give a positive value

        minht=minht-ht[i]; // because of Bit Manipulations and hence the condition of for loop runs from i=1 to size-1 to compensate errors

        if(minht>0)
        {
            trap+=minht;
        }
    }

    return trap;
}

int main()
{
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};

    int n=sizeof(height)/sizeof(int);

    cout<<"The Amount Rainwater for the given heights of buildings is: "<<compute_rainwater(height,n);

    return 0;
}
