class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int dom=0;

        for(int c:nums){
            mp[c]++;
            if(mp[c]>n/2){
                dom=c;
            }
        }
        int f = mp[dom];
        int split = -1;
        int f1=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==dom){
                f1++;
            }
            int size1=i+1;
            int size2=n-size1;
            int f2=f-f1;
            if(f1>size1/2 && f2>size2/2){
                split=i;
                return split;
            }

        }
        return split;
    }
};