#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        return (x > y) ? solve(s, "ab", x, "ba", y) : solve(s, "ba", y, "ab", x);
    }

    int solve(string s, string firstPair, int firstVal, string secondPair, int secondVal) {
        stack<char> st;
        int count = 0;

    
        for (char c : s) {
            if (!st.empty() && st.top() == firstPair[0] && c == firstPair[1]) {
                st.pop();
                count += firstVal;
            } else {
                st.push(c);
            }
        }

        
        string remaining = "";
        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());

    
        for (char c : remaining) {
            if (!st.empty() && st.top() == secondPair[0] && c == secondPair[1]) {
                st.pop();
                count += secondVal;
            } else {
                st.push(c);
            }
        }

        return count;
    }
};