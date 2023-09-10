class Solution {
public:
    const long long MOD = 1e9+7;
    long long  fact(long long n){
        if(n == 0) return 1;
        return (n*fact(n-1))%MOD;
    }
    long long ipowM(long long base,long long exp){
        long long  res = 1;
    while(exp>0){
        if(exp&1) res = (res*base)%MOD;
        exp>>=1;
        base = (base*base)%MOD;
    }
return res;
    }
    int countOrders(int n) {
       
       long long  x = fact(2*n);
       long long y = ipowM(2,n);
       long long ans = (x*ipowM(y,MOD-2)+MOD)%MOD;
       return ans;
    }
};