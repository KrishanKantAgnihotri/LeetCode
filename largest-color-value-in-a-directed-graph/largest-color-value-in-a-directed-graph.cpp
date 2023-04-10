class Solution {
public:
    int largestPathValue(string s, vector<vector<int>>& e)   {
        int n = s.size() ;
        if(e.size() == 0) return 1;
        vector<vector<int>> adj(n+1,vector<int>());
        vector<vector<int>> dp(n+1,vector<int>(26));
        vector<int> indg(n+1);
        int ans = 0 ; 
        int cnt = 0 ; 
        for(int i = 0 ;i<e.size() ;i++){
            adj[e[i][0]].push_back(e[i][1]);
            indg[e[i][1]]++;
        }
        queue<int> q;
        for(int i = 0 ;i<n ;i++){
            if(indg[i] == 0){
                q.push(i);
                dp[i][s[i]-'a']++;
                cnt++;
            }
        }
        while(q.size()){
            int m = q.size();
            for(int i = 0 ;i<m ;i++){
                int u = q.front();
                q.pop();
                for(auto child :adj[u]){
                    indg[child]--;
                    for(int k = 0 ;k<26 ;k++){
                        dp[child][k] = max(dp[child][k],dp[u][k]);
                    }
                    if(indg[child] == 0){
                        cnt++;
                        dp[child][s[child]-'a']++;
                        int mx = *max_element(dp[child].begin(),dp[child].end());
                        ans = max(ans,mx);
                        q.push(child);
                    }
                }
            }
        }
        return (n !=cnt)?-1:ans;
    }
};