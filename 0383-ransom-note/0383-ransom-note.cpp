class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        bool res=true;

        for(char c : ransomNote){
            mp1[c]++;
        }
        for(char c : magazine){
            mp2[c]++;
        }

        for(auto it : mp1){
            if(it.second <= mp2[it.first]){
                res=true;
            }
            else{
                return false;
            }
        }
        return res;
        
    }
};