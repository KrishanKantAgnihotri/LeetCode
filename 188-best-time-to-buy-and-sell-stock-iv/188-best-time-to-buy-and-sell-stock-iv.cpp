class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(k+1,vector<int>(n+1));
        //dp[i][j] = maximum we can get by making i transaction using price[j] at last
          int mx = INT_MIN;
         for(int i = 1 ;i<=k ;i++){
             //dp[i][j] = max(dp[i-1][jj-1]+price[j]-price[jj-1] for all jj < j )
             
             for(int j = 1 ;j<n ;j++){
                 mx = max(mx,dp[i-1][j-1]-prices[j-1]);
                 dp[i][j] = max(dp[i][j-1],mx+prices[j]);
             }
             mx = INT_MIN;
         }
        return dp[k][n-1];
    }
};