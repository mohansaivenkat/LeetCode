class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int c : nums){
            mp[c]++;
        }

        for(auto it : mp){
            if(it.second==1){
                return it.first;
            }
        }
        return 0;
    }
    
};