class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        int index= -1;
        for(int i =0;i<n;i++){
            if(nums[i]>=0){
                break;
            }
            index=i;
        }
        int i = index;
        int j= index+1;

        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }

        vector<int> ans(n);
        int k=0;
        while(i>=0 and j<n){
            if(nums[i]<nums[j]){
                ans[k]= nums[i];
                i--;
                k++;
            }
            else{
                ans[k]=nums[j];
                j++;
                k++;
            }
        }
        while(i>=0){
            ans[k]=nums[i];
            i--;
            k++;
        }
        while(j<n){
            ans[k]=nums[j];
            j++;
            k++;
        }

        return ans;

    }
};