class Solution {
    public int majorityElement(int[] nums) {
        int freq=0;
        int ans=nums[0];

        for(int c : nums){

            if(freq==0){
                ans=c;
            }
            if(ans==c){
                freq++;
            }
            else{
                freq--;
            }
            
        }

        return ans;
    }
}