class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // unordered_set<int> st;
        // for(int i : nums){
        //     st.insert(i);
        // }
        // int n=nums.size();
        // vector<int> ans;
        // for(int i=1;i<=n;i++){
        //     if(st.find(i)==st.end()){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;
        int n = nums.size();
        vector<int> v(n);
        for(int i:nums){
            v[i-1]=1;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
        

    }
};