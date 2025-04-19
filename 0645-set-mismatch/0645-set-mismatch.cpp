class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n =nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        for(int c:nums){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.second >1){
                v.push_back(it.first);
            }
        }
        for(int i=0;i<n;i++){
            if(mp.count(i+1)==0){
                v.push_back(i+1);
            }
        }

        return v;
    }
};