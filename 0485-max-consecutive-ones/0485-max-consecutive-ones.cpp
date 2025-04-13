class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maxi=0;
        int n=nums.size();
        int count=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxi=max(count,maxi);
            }
            else{
                count=0;
            }

        }
        return maxi;
        
    }
};