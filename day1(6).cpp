//Author: Sahil Anand
//Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx=INT_MIN, profit=0;
        for(int i=prices.size()-1;i>=0;i--){
            maxx=max(maxx, prices[i]);
            profit=max(profit, maxx-prices[i]);
        }
        return profit;
    }
};