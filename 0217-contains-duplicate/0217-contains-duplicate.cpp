class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int c : nums){
            if(mp[c]>=1){
                return true;
            }
            
                mp[c]++;
            
        }
        return false;
    }
};