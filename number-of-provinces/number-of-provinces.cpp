class Solution {
vector<vector<int>> adj;
vector<bool> vis;
void dfs(int u){
    vis[u] = true;
    for(auto child : adj[u]){
        if(vis[child]) continue;
        dfs(child);
    }
}
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected.size();
        adj.resize(n+1,vector<int>());
        vis.resize(n+1,false);
        for(int i = 0 ;i<n ;i++){
            for(int  j = 0 ;j<m ;j++){
                if(i == j) continue;
                if(isConnected[i][j]){
                    adj[i].push_back(j);
                }
            }
        }
        int cnt = 0 ; 
        for(int i = 0 ;i<n ;i++){
            if(!vis[i]){
                dfs(i);
                cnt++;
            }
        }
        return cnt;
    }
};