class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int n =s.size();
        for(char c:s){
            m[c]++;
        }

        for(int i=0;i<n;i++){
            if(m[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};