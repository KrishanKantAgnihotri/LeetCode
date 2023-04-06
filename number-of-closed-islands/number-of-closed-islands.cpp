class Solution {
public:
    int n,m;
    int dx[4] = {0,-1,1,0};
    int dy[4] = {1,0,0,-1};
    bool valid(int x,int y){
        return (x>=0 && y>=0 && (x<n) && (y<m));
    }
    bool dfs(vector<vector<int>> &v,int x,int y){
        v[x][y] = -1;
        bool ok = true;
        for(int i = 0 ;i<4 ;i++){
            int xx = dx[i]+x;
            int yy = dy[i]+y;
            ok&=valid(xx,yy);
            if(valid(xx,yy) && (v[xx][yy] == 0)){
                ok&=dfs(v,xx,yy);
            }
        }
        return ok ;
    }
    int closedIsland(vector<vector<int>>& v) {
        n = v.size();
        m = v[0].size();
        int ans = 0 ; 
        for(int i = 0 ;i<n ;i++){
            for(int j = 0 ;j<m ;j++){
               if(v[i][j] == 0)
                if(dfs(v,i,j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};