class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s=0;
        int e=n-1;
        int res=n;

        if(nums.empty()) return 0;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
                
            }
            else{
                e=mid-1;
                res=mid;
                }
            }
        

        return res;
    }
};