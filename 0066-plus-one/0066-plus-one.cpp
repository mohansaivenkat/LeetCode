class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // long long num=0;
        // for(int i : digits){
        //     num = num*10+i;
        // }
        
        // num=num+1;
        
        // vector<int> fin;
        // while(num>0){
        //     int temp = num%10;
        //     num=num/10;
        //     fin.push_back(temp);
        // }
        // reverse(fin.begin(),fin.end());
        // return fin;
        int n = digits.size();
        for(int i = n-1;i>=0;i--){
            digits[i]++;
            digits[i] = digits[i]%10;
            if(digits[i]!=0){
                return digits;
            }
        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};