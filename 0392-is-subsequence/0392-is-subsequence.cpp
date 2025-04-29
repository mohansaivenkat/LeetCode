class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i=0;
        int j=0;

        int size1=s.size();
        int size2=t.size();

        while(i<size1 && j<size2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }   

        if(i==size1){
            return true;
        }
        else{
            return false;
        }

    }
};