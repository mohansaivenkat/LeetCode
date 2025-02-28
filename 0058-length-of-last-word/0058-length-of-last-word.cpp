class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int curr = 0;
        for(char c : s){
            if(c == ' '){
                curr=0;
            }
            else{
                curr++; 
                if(curr>0){
                    res=curr;;
                }    
            }
        }
        return res;
    }
};