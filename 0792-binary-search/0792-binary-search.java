class Solution {

    public int rec(int i,int j,int[] nums, int target){
        if(i>j){
            return -1;
        }
        int mid = i + (j-i)/2;
        if(i<=j && target < nums[mid]){
            j=mid-1;
            return rec(i,j,nums,target);
        }
        else if(i<=j && target >nums[mid]){
            i=mid+1;
            return rec(i,j,nums,target);
        }
        else if(i<=j && target == nums[mid]){
            return mid;
        }
        return 0;
    }

    public int search(int[] nums, int target) {
        int i=0;
        int j=nums.length-1;

        int result = rec(i,j,nums,target);

        return result;
    }
}