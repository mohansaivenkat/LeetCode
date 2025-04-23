class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;

        for(int i =1;i<=n;i++){
            int a=i;
            int sum =0;
            while(a>0){
                int temp =a%10;
                a=a/10;
                sum=sum+temp;
            }
            mp[sum]++;
        }

        int maxi=0;
        for(auto it :mp){
            maxi = max(maxi,mp[it.first]);
        }
        int count=0;
        for(auto it:mp){
            if(it.second==maxi){
                count++;
            }
        }

        return count;

        
    }
};