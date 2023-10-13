class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) {
       int n  = v.size();
       if(n == 1) return v[0];
       if(n == 2) return min(v[0],v[1]);
       vector<int> dp(n+1);
       
       dp[0]  = v[0];

       dp[1] = v[1];
       for(int i = 2 ;i<n ;i++){
           dp[i] = min(dp[i-2],dp[i-1])+v[i];

       }
       return min(dp[n-1],dp[n-2]);

    }
};