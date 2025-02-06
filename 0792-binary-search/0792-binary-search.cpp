class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = INT_MAX;int s=0 ; int e = nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                ans = min(ans,mid);
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};