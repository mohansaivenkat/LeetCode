class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int odd=0;
        int res=0;

        for(char c : s){
            mp[c]++;
        }

        for(auto it : mp){
            if(it.second%2 !=0 ){
                res=res+(it.second-1);
                odd=1;
            }
            else{
                res=res+it.second;
            }
        }

    return res+odd;
    }
};