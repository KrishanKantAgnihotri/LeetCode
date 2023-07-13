class Solution {
public:
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        if(pre.size()==0) return true;
        vector<vector<int>> adj(n+1,vector<int>());
        vector<int> in(n+1);
        for(int i = 0 ; i<pre.size() ;i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            in[pre[i][0]]++;
        }
        vector<bool> vis(n+1,false);
        queue<int> q;
        for(int i = 0 ; i<n ;i++){
          if(in[i] == 0){
            q.push(i);
          }
        }
        while(!q.empty()){
            int x = q.size();
            for(int i = 0 ; i<x ;i ++){
                int u = q.front();
                q.pop();
                if(vis[u]) continue;
                vis[u] = true;
                for(auto child : adj[u]){
                    if(vis[child]) continue;
                    in[child]--;
                    if(in[child] == 0)
                    q.push(child);
                }
            }
        }

        for(int i = 0 ; i<n ;i++){
            if(!vis[i]) return false;
        }
        return true;
        
    }
};