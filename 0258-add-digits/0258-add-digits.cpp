class Solution {
public:
    int addDigits(int num) {
        int res=num;
        while(res > 9){
            num=res;
            res=0;
            while(num>0){
            int temp = num%10;
            num=num/10;
            res=res+temp;
            }
        }

        return res;
        
    }
};