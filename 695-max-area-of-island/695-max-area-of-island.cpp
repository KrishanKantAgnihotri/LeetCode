class Solution {
public:
    static const int x = 4;
    int dx[x] = {1,0,-1,0};
    int dy[x] ={0,1,0,-1};
    int dfs(int i ,int j,vector<vector<int>> &grid ){
        // cout<<i<<" "<<j<<endl;
        if(!grid[i][j])
              return 1;
           grid[i][j] = 0 ;
        int n = grid.size();
        int m = grid[i].size();
        int cnt = 1 ; 
        
        for(int k = 0 ;k<4 ;k++){
            int xx = dx[k]+i;
            int yy = dy[k]+j;
            if((xx>=0) && (yy>=0) && (xx<n) && (yy<m) && (grid[xx][yy])){
                cnt+=dfs(xx,yy,grid);
            }
        }
        return cnt;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0 ; 
        for(int i = 0 ;i<n ;i++){
           for(int j = 0 ;j<m ;j++){
               if(grid[i][j]){
                   ans = max(ans,dfs(i,j,grid));
               }
           }            
        }
        return ans;
    }
};