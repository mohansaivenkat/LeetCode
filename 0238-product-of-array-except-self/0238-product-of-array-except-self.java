class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        int product1 = 1;

        for (int i = 0; i < n; i++) {
            product1 *= nums[i];
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                int product = 1;
                for (int j = 0; j < n; j++) {
                    if (j == i) continue;
                    product *= nums[j];
                }
                ans[i] = product;
            } else {
                ans[i] = product1 / nums[i];
            }
        }

        return ans;
    }
}