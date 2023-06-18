class Solution {
public:
    int mod=1000000007;
    long long int dp[1001][1001];
    
    bool isSafe(vector<vector<int>> &grid, int x, int y, int prev){
        return x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && grid[x][y]>prev;
    }
    int countPaths(vector<vector<int>> &grid, int x, int y, int prev){
        if(isSafe(grid,x,y,prev)==false){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        int UP=countPaths(grid,x-1,y,grid[x][y]);
        int DOWN=countPaths(grid,x+1,y,grid[x][y]);
        int LEFT=countPaths(grid,x,y-1,grid[x][y]);
        int RIGHT=countPaths(grid,x,y+1,grid[x][y]);
        return dp[x][y]=(1+((UP+DOWN)%mod+(LEFT+RIGHT)%mod)%mod)%mod;
    }
    int countPaths(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res=(res+countPaths(grid,i,j,0))%mod;
            }
        }
        return res%1000000007;
    }
};