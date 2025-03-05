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

        vector<int> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i=i+2){
            v.push_back(nums[i+1]);
            v.push_back(nums[i]);
        }
        return v;
    }
};