class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int ans=INT_MIN;
        sort(nums.begin(),nums.end(),greater<int>());
        int n= nums.size();
        int count=1;

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            count++;
            if(count==3){
                return nums[i];
            }
        }

        return nums[0];
        
    }
};