/*

Question-3: You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.


Constraints:

1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4


*/

#include<iostream>

using namespace std;

int max_profit(int *p,int size)
{
    int bestbuy[100000],maxp;

    bestbuy[0]=INT_MAX;

    for(int i=1;i<=size;i++)
    {
        if(i==1)
        {
            bestbuy[i]=p[i-1];
        }

        else
        {
            bestbuy[i]=min(p[i-1],bestbuy[i-1]);
        }

    }

    maxp=0;

    for(int i=0;i<size;i++)
    {
        maxp=max(maxp,p[i]-bestbuy[i]);
    }

    return maxp;
}

int main()
{
    int prices[]={7,1,5,3,6,4};

    int n=sizeof(prices)/sizeof(int);

    cout<<"For The Given Array of Prices: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Day: "<<i<<" Price: "<<prices[i]<<endl;
    }

    cout<<"Max Profit That Can Be Obtained Is: "<<max_profit(prices,n);

    return 0;
}
