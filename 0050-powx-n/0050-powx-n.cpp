class Solution {
public:
    double myPow(double x, int n) {

        long int binary = n;
        double ans = 1;
        if(n<0){
            x = 1/x;
            binary = binary * -1;
            while(binary>0){
                if(binary%2==1){
                    ans *= x;
                }
                x *= x;
                binary /= 2;
            }
            return ans;
        }

        if(n==0) return 1;

        if(n>0){
            while(binary>0){
                if(binary%2==1){
                    ans *= x;
                }
                x *= x;
                binary /= 2;
            }
            return ans;
        }
        return 1;
    }
};