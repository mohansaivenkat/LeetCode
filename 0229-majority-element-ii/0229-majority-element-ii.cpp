class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v;
        int n = nums.size();
        for(int c : nums){
            mp[c]++; 
        }
        for(auto it : mp){
            if(it.second>n/3){
                v.push_back(it.first);
            }
        }
        reverse(v.begin(),v.end());

        return v;
    }
};