class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i=0;i<n1;i++){
            bool check=false;
            for(int j=0;j<n2;j++){
                if(check){
                    if(nums2[j]>nums1[i]){
                        res.push_back(nums2[j]);
                        check=false;
                    }                  
                }
                if(nums1[i]==nums2[j]){
                    check=true;
                }
                
            }
            if(check){
                res.push_back(-1);
            }
        }

        return res;
    }
};