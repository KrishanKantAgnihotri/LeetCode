class Solution {
public:
    const int INF = INT_MAX;
    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size();
        vector<vector<long long int>> dp(n+1,vector<long long int>(n+1,INF));
        dp[0][0] = t[0][0];
        for(int i =0 ;i<n ;i++){
            for(int j =0;j<t[i].size();j++){
                if(i>0)
                dp[i][j] = min(dp[i][j],dp[i-1][j]+t[i][j]);
                if(j>0   && i>0)
                    dp[i][j] = min(dp[i][j],dp[i-1][j-1]+t[i][j]);
            }
        }
        long long int ans = INF;
        for(int i = 0 ;i<t[n-1].size() ;i++){
         ans = min(ans,dp[n-1][i]);   
        }
        return ans;
        
    }
};