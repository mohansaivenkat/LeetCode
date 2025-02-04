class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1="";
        string result2="";
        for(string c : word1){
            result1+=c;
        }

        for(string c: word2){
            result2+=c;
        }

        return result1==result2;
    }
};