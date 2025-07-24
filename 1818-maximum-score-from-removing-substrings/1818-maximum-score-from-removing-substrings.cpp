#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        return (x>y) ? calculate(s,"ab",x,"ba",y) : calculate(s,"ba",y,"ab",x);
    }

    int calculate(string original,string firstpair,int first, string secondpair,int second){
        // first pass
        stack<char> stk;
        int count = 0;
        if(original.size()<2) return 0;
        for(char c : original){
            if(!stk.empty() and stk.top()==firstpair[0] and c==firstpair[1]){
                stk.pop();
                count += first;
            }
            else{
                stk.push(c);
            }
        }

        //second pass
        string remstr = "";
        while(!stk.empty()){
            remstr += stk.top();
            stk.pop();
        }

        reverse(remstr.begin(),remstr.end());

        if(remstr.size()<2) return count;

        for(char c: remstr){
            if(!stk.empty() and stk.top()==secondpair[0] and c==secondpair[1]){
                count += second;
                stk.pop();
            }
            else{
                stk.push(c);
            }
        }

        return count;

    }
};