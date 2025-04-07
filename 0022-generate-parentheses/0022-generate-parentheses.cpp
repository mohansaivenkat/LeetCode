class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        int open=0;
        int close=0;

        func(open,close,n,ans,s);

        return ans;

    }

    void func(int open,int close,int n,vector<string> &ans,string s){
        if(open==n && close==n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            func(open+1,close,n,ans,s+'(');
        }
        if(open>close){
            func(open,close+1,n,ans,s+')');
        }
    }
};