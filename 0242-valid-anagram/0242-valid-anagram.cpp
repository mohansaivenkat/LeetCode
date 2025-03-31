class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()) return false;

        unordered_map<char,int> st;
        unordered_map<char,int> tt;

        for(char c: s){
            st[c]++;
        }
        for(char c: t){
            tt[c]++;
        }

        for(auto it : st){
            if(st[it.first]!=tt[it.first]){
                return false;
            }
        }

        return true;
    }
};