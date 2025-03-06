class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int zeroes = -1;
        int twos= n;
        int i=0;
        while(i<twos){
            if(nums[i]==0){
                zeroes++;
                swap(nums[i],nums[zeroes]);
                i++;
            }

            else if(nums[i]==1){
                i++;
            }
            else if(nums[i]==2){
                twos--;
                swap(nums[i],nums[twos]);
            }
            
        }
    }
};