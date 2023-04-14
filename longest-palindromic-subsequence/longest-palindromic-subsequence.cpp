class Solution {
public:
   vector<vector<int>>  dp;
   int solve(int l,int r,string &s){
       if(l == r){
           return dp[l][r] = 1;
       }
       if(l>=r){
           return 0;
       }
       if(dp[l][r]!=-1) return dp[l][r];
       if(s[l] == s[r]){
           dp[l][r] = solve(l+1,r-1,s)+2;
       }
       else{
           dp[l][r] = max(solve(l+1,r,s),solve(l,r-1,s));
       }
       return dp[l][r];
   }
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        dp.resize(n+1,vector<int>(n+1,-1));
        dp[0][0] = 1;
        return solve(0,n-1,s);
    }
};