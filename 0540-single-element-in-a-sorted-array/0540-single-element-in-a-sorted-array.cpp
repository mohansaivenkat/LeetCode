class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;

        if(nums.size()==1){
            return nums[0];
        }

        while(i <= j){
            int mid = i + (j-i)/2;

            if(mid==0){
                if(nums[mid+1] != nums[mid]){
                    return nums[mid];
                }
            }
            if(mid == nums.size()-1){
                if(nums[mid -1] != nums[mid]){
                    return nums[mid];
                }
            }

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            if(nums[mid-1]==nums[mid]){
                int check = (mid-1)-i;
                if(check%2==1){
                    j=mid-2;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                int check = mid - i;
                if(check%2==1){
                    j=mid-1;
                }
                else{
                    i=mid+2;
                }
            }
        }
        return 0;
    }
};