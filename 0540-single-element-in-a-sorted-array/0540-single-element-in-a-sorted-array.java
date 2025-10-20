class Solution {
    public int singleNonDuplicate(int[] nums) {
        int i =0;
        int j =nums.length -1;

        if(nums.length == 1){
            return nums[0];
        }

        while(i<=j){
            int mid = i + (j-i)/2;

            if(mid==0){
                if(nums[mid+1] != nums[mid]){
                    return nums[mid];
                }
            }
            if(mid == nums.length-1){
                if(nums[mid -1] != nums[mid]){
                    return nums[mid];
                }
            }

            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            if(mid %2==0){
                if(nums[mid-1]==nums[mid]){
                    j=mid-2;
                }
                else{
                    i=mid+2;
                }
            }
            else{
                if(nums[mid-1]==nums[mid]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            } 
        }
        return 0;
    }
}