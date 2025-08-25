#include<vector>
// #include<algorithms>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int freq=0;
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]== nums[i-1]){
                freq++;
            }
            else{
                freq=0;
                ans=nums[i];
            }

            if(freq >= nums.size()/2){
                return ans;
            }

        }
        return ans;
    }
};