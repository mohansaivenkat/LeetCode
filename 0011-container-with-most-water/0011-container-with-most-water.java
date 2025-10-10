class Solution {
    public int maxArea(int[] height) {
        int i = 0;
        int j = height.length -1;
        int maxi = 0;
        while(i<j){
            int water  = (j-i) * Math.min(height[i],height[j]);
            maxi = Math.max(maxi,water);

            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
}