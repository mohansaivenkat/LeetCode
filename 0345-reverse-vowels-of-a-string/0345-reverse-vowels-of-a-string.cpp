class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> st={'A','E','I','O','U','a','e','i','o','u'};

        int n = s.size();
        int start=0;
        int end=n-1;

        while(start<end){
            if(st.count(s[start]) && st.count(s[end])){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            if(!st.count(s[start])){
                start++;
            }
            if(!st.count(s[end])){
                end--;
            }
        }

        return s;
               

    }
};