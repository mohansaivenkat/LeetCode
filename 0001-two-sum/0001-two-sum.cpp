#include<algorithm>
#include<vector>
#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Two-pointer approach 
        // int i = 0;
        // int j = nums.size()-1;
        // vector<int> ans;

        // sort(nums.begin(),nums.end());

        // while(i<j){
        //     if((nums[i]+nums[j]) == target){
        //         ans.push_back(i);
        //         ans.push_back(j);
        //         return ans;
        //     }
        //     else if((nums[i]+nums[j]) > target){
        //         j--;
        //     }
        //     else if((nums[i]+nums[j]) < target){
        //         i++;
        //     }
        // }
        // return {};

        //  Two pointer doesnt work becoz it only works on sorted array

        // Hashmap

        unordered_map<int,int> mp;

        for(int i=0 ; i<nums.size() ; i++){
            int comp = target - nums[i];
            if(mp.count(comp)){
                return {mp[comp],i};
            }
            mp[nums[i]]=i;
        }
        return {};

    }
};