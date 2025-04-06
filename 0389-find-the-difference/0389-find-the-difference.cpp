class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char c : s){
            mp1[c]++;
        }
        for(char c : t){
            mp2[c]++;
        }

        for(auto it: mp2){
        if(mp1[it.first]!=it.second){
                return it.first;
            }
        }

        return 'k';
    }
};