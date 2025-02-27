class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int start_index = -1;
        int end_index = -1;
        int n = nums.size();
        int s = 0;
        int e = n-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                int lcheck=mid;
                int rcheck=mid;
                start_index = mid;
                end_index = mid;
                while(lcheck > 0 && nums[lcheck-1]==target){
                    lcheck--;
                    start_index = lcheck;
                }
                while(rcheck < n - 1 && nums[rcheck+1]==target){
                    rcheck++;
                    end_index = rcheck;
                }
                break;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
        }
        ans.push_back(start_index);
        ans.push_back(end_index);

        return ans;
    }
};