class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int prev_min=prices[0];
        int profit = 0;

        for(int i=0;i<n;i++){
            profit= max(prices[i]-prev_min,profit);
            if(prices[i]<prev_min){
                prev_min=prices[i];
            }
        }
        return profit;
    }
};