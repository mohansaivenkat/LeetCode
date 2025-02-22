class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int count = 1;
        string temp(1,s[0]);
        int n = s.size();
        int j = 1;
        int i = 0;
        while(j<n){
            if(temp.find(s[j])==string::npos){
                temp+=s[j];
                count = max(count,(int)temp.size());
                j++;
            }
            else{
                temp.erase(0,1);
                i++;
            }
        }

        return count;
    }
};