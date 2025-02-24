class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int i=0,j=0;
        int n = s.length();
        int ans= 0 ;
        while(j<n){
            while(j<n and (m.count(s[j])==0 or m[s[j]]<i )){
                m[s[j]]=j;
                j++;
            }
            ans = max(ans,j-i);
            i=m[s[j]]+1;
            m[s[j]]=j;
            j++;
        }

        return ans;
    }
};