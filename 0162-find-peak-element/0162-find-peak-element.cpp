class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if ((mid == 0 || arr[mid - 1] < arr[mid]) && (mid == n - 1 || arr[mid + 1] < arr[mid])) {
                return mid; // Peak found
            }
            else if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
                s = mid + 1; // Move right
            } else {
                e = mid - 1; // Move left
            }        
        }
        
        return -1; 
    }
};