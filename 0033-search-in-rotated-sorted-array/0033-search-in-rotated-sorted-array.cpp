class Solution {
public:
    int search(vector<int>& arr, int target) {
        int i = 0;
        int j = arr.size()-1;

        while(i<=j){
            int mid = i + (j-i)/2;

            if(arr[mid]==target){return mid;}

            if(arr[i]<=arr[mid]){//left sorted array
                if(arr[i] <= target && target  <= arr[mid]){
                    j = mid -1;
                }
                else{
                    i = mid+1;
                }
            }
            else{//right sorted array
                if(arr[mid]<=target && target <=arr[j]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }

        }
        return -1;
    }
};