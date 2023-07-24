class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        if(n<0){
            n =abs(n);
        while(n>0){
            if(n&1) ans/=x;
            n>>=1;
            x*=x;
        }
            return ans;
        }
        while(n>0){
            if(n&1) ans*=x;
            n>>=1;
            x*=x;
        }
        
        return ans;
        
    }
};