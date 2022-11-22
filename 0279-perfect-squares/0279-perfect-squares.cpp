class Solution {
public:
    const static int mx = 1e4+1;
    int dp[mx];
    int calc(int n){
        if(n ==1 ) return 1;
        if(dp[n]!=INT_MAX) return dp[n];
        int mn = n;
         for(int i = 1 ;i*i<=n ;i++){
             mn = min(mn,calc(n-i*i)+1);
         }
        return dp[n] = mn;
    }
    int numSquares(int n) {
        for(int i=1;i<=n ;i++){
            dp[i] = INT_MAX;
        }
       return min(calc(n),n);
    }
};