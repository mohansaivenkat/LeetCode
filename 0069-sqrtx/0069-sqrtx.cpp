class Solution {
public:
    int mySqrt(int x) {

        if(x==0)return 0;
        int s = 1;
        int e = x;

        int mid = s+(e-s)/2;
        int ans=mid;
        // 8 -> 4 2
        while(e>=s){
            mid = s+(e-s)/2;
            if(mid<=x/mid){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

        return ans;
    }
};