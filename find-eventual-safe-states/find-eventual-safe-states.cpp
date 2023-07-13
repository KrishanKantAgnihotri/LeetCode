class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        int n = graph.size();
        vector<int> out(n);
        queue<int> q;
        vector<bool> vis(n);
        vector<vector<int>> adj(n,vector<int>());
        for(int i = 0 ; i<n ;i++){
            for(int j = 0; j<graph[i].size() ;j++){
                out[i]++;
                adj[graph[i][j]].push_back(i);
            }
            if(out[i] == 0) q.push(i);
        }
        while(!q.empty()){
            int x = q.size();
            for(int i = 0 ; i<x ; i++){
                int u = q.front();
                q.pop();
                if(vis[u]) continue;
                vis[u] = true;
                ans.push_back(u);
                for(auto child : adj[u]){
                    if(vis[child
                    ]) continue;
                    out[child]--;
                    if(out[child] == 0) q.push(child);

                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
};