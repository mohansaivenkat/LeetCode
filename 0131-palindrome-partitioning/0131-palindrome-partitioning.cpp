class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> op;
        int n = s.length();
        func(ans, op, s, 0, n);
        return ans;
    }

    void func(vector<vector<string>> &ans, vector<string> &op, string& s, int i, int n) {
        if (i == n) {
            ans.push_back(op);
            return;
        }

        for (int j = i; j < s.length(); j++) {
            if (ispal(s, i, j)) {
                op.push_back(s.substr(i, j - i + 1));
                func(ans, op, s, j + 1, n);
                op.pop_back();
            }
        }
    }

    bool ispal(string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};