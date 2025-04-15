class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int size = nums.size();
        if(n==0){
            return true;
        }
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) { 
                bool left = (i == 0) || (nums[i - 1] == 0);
                bool right = (i == size - 1) || (nums[i + 1] == 0);

                if (left && right) {
                    nums[i] = 1;
                    n--;
                }
            }

            if (n == 0) return true;
        }

        return false;
    }
};