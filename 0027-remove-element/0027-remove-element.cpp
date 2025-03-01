class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        
        int j=n-1;
        int i = 0;
        int res=0;
        if(nums.empty()) return 0;
        while(i<=j){
            while(i<=j && nums[j]==val){
                j--;
                res++;
            }

            if(i<=j && nums[i]==val){
                swap(nums[i],nums[j]);
                res++;
                j--;
            }
            i++;
        }

        return n-res;
        
    }
};