#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int deal = 0;
        int profit = 0;
        int i;
        int buy = 0;
        int buycount = 0;
        int sell = 0;
        int sellcount = 0;
        if (prices.size() == 0 || prices.size() == 1)
        {
            return 0;
        }
        else if (prices.size() == 2)
        {
            if (prices[1] - prices[0] > 0)
            {
                profit = prices[1] - prices[0];
            }
        }
        else if (prices.size() > 2)
        {
            if (prices[1] - prices[0] > 0)
            {
                buycount = 1;
            }
            for (i = 1;i <= prices.size() - 2;i++)
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
                if ((sellcount == buycount) && deal != sellcount)
                {
                    profit = profit + prices[sell] - prices[buy];
                    deal++;
                }
            }
        }
        if ((prices[prices.size() - 1] - prices[prices.size() - 2]) > 0 && prices.size() != 2)
        {
            sellcount++;
            profit = profit + prices[prices.size() - 1] - prices[buy];
        }
        return profit;
    }
};