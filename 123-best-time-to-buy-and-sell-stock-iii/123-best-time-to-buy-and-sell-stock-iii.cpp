class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int k = 2 ; 
        vector<vector<int>> dp(k+1,vector<int>(n+1));
        int mx = INT_MIN;
        for(int i = 1 ;i<=k ;i++){
            for(int j = 1 ;j<n ;j++){
                mx = max(mx,dp[i-1][j-1]-prices[j-1]);
                dp[i][j] = max(dp[i][j-1],mx+prices[j]);
            }
            mx = INT_MIN;
        }
        return dp[k][n-1];
    }
};