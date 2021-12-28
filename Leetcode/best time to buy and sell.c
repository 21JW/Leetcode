#include<stdio.h>
int main()
{
    int deal = 0;
    int prices[] = { 3,2,6,5,0,3 };
    int pricesSize = sizeof(prices) / sizeof(int);
    int profit = 0;
    int i;
    int buy = 0;
    int buycount = 0;
    int sell = 0;
    int sellcount = 0;
    if (pricesSize == 0 || pricesSize == 1)
    {
        return 0;
    }
    else if (pricesSize == 2)
    {
        if (prices[1] - prices[0] > 0)
        {
            profit = prices[1] - prices[0];
        }
    }
    else if (pricesSize > 2)
    {
        if (prices[1] - prices[0] > 0)
        {
            buycount = 1;
        }
        for (i = 1;i <= pricesSize - 2;i++)
        {
            if ((prices[i - 1] - prices[i] >= 0) && (prices[i] - prices[i + 1] < 0))
            {
                buy = i;
                buycount++;
            }
            else if ((prices[i - 1] - prices[i] < 0) && (prices[i] - prices[i + 1] >= 0))
            {
                sell = i;
                sellcount++;
            }
            if ((sellcount == buycount)&& deal!=sellcount)
            {
                profit = profit + prices[sell] - prices[buy];
                deal++;
            }
        }
    }
    if ((prices[pricesSize - 1] - prices[pricesSize - 2]) > 0 && pricesSize != 2)
    {
        sellcount++;
        profit = profit + prices[pricesSize - 1] - prices[buy];
    }
    printf("%d ", profit);
    return profit;
}