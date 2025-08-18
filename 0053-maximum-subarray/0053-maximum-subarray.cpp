class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;int curr_sum=0;
        for(auto c:nums){
            curr_sum += c;
            max_sum=max(max_sum,curr_sum);
            if(curr_sum<0){
                curr_sum=0;
            }
        }
        return max_sum;
        
    }
};