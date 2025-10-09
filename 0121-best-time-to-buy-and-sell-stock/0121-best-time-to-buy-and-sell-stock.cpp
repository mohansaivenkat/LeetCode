class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int purchase = prices[0];
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < purchase) purchase = prices[i];
            profit = max(profit, prices[i] - purchase);
        }
        return profit;
    }
};