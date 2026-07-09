class Solution {
public:
    double myPow(double x, long long n) {

        double ans = 1;
        
        if(n < 0){
            x = 1/x;
            n = -1*n;
        }

        while(n > 0){
            if(n%2 != 0){
                ans = ans*x;
                n--;
            }
            else{
                x = x*x;
                n = n/2;
            }
        }

        return ans;
    }
};