class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        vector<int> dp(n + 1, -1);
        return func(s, 0, dp);
    }

    int func(string &s, int i, vector<int>& dp){
        if(i == s.length()) return 1;             
        if(s[i] == '0') return 0;                 
        if(dp[i] != -1) return dp[i];            

        int ways = func(s, i + 1, dp);           
        
        if(i + 1 < s.length()){
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
            if(num <= 26){
                ways += func(s, i + 2, dp);
            }
        }

        dp[i] = ways;
        return dp[i];
    }
};