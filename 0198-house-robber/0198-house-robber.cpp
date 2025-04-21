class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return func(nums, dp, 0);
    }

    int func(vector<int>& arr, vector<int>& dp, int i) {
        if (i >= arr.size()) {
            return 0;
        }
        if (dp[i] != -1) return dp[i];
        
        int p = arr[i] + func(arr, dp, i + 2);
        int np = func(arr, dp, i + 1);

        dp[i] = max(p, np);
        return dp[i];
    }
};