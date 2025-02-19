class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;m['V']=5;m['X']=10;m['L']=50;m['C']=100;m['D']=500;m['M']=1000;
        int n = s.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(m[s[i]]<m[s[i+1]]){
                sum = sum-m[s[i]];
            }
            else{
                sum=sum+m[s[i]];
            }
        }
        sum= sum+m[s[n-1]];

        return sum;
    }
};