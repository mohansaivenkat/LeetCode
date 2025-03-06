class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // int first=INT_MIN;
        // int second=INT_MIN;
        
        // while(nums.size()=0){
        //     int n = nums.size();
        //     for(int i=0 ; i<n ;i++){
                
        //     }
        // }

        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i=i+2){
           swap(nums[i],nums[i+1]);
        }
        return nums;
    }
};