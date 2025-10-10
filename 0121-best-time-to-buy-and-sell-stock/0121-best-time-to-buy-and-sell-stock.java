class Solution {
    public int maxProfit(int[] prices) {
        int maxi = 0;
        int bb = prices[0];

        for(int i=0 ; i<prices.length;i++){
            if(prices[i]>bb){
                maxi= Math.max(maxi,prices[i]-bb);
            }
            bb = Math.min(bb,prices[i]);
        }
        return maxi;
    }
}