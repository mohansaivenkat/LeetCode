class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            if(m.count(nums[i])>0){
                int prev_index=m[nums[i]];
                if(i-prev_index<=k){
                    return true;
                }
            }
            m[nums[i]]=i;
        }
        return false;
    }
};