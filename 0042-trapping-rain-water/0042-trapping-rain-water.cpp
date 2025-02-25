class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);
        
        int water_count = 0;
        for(int i = 0 ; i< n ; i++){
            if(i == 0){
                lmax[i] = height[0];
            }
            else{
            lmax[i]=max(height[i],lmax[i-1]);
            }
        }
        for(int i = n-1 ; i>=0 ; i--){
            if(i==n-1){
                rmax[i] = height[n-1];
            }
            else{
            rmax[i]=max(height[i],rmax[i+1]);
            }
        }
        for(int i =0;i<n ; i++){
            water_count += min(lmax[i],rmax[i]) - height[i];
        }

        return water_count;

    }
};