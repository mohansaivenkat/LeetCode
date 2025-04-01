class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {


        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(int c:nums1){
            mp1[c]++;
        }
        for(int c: nums2){
            mp2[c]++;
        }

        vector<int> v;
        for (auto it : mp1) {
            if (mp2.find(it.first) != mp2.end()) { 
                v.push_back(it.first);
            }
        }
        return v;
        
    }
};