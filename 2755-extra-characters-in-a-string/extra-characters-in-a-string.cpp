class Solution {
public:
    int minExtraChar(string s, vector<string>& d) {
        unordered_set<string> u(d.begin(),d.end());
        int n = s.length();
        vector<int> dp(n+1,0);
        
        for(int i = n-1 ;i>=0 ;i--){
            dp[i] = dp[i+1]+1;
            for(int j = i ;j<n ;j++){
                string m  = s.substr(i,(j-i+1));
                if(u.find(m)!=u.end()){
                    dp[i] = min(dp[i],dp[j+1]);
                }
            }
        }
        return dp[0];
    }
};