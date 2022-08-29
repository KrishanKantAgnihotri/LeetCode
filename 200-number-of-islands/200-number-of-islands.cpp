 int dx[] = {1,0,-1,0};
    int dy[] = {0,1,0,-1,};
class Solution {
public:
   
    void dfs(vector<vector<char>> &grid,int i,int j,int n,int m){
        grid[i][j] = '2' ; 
        for(int k = 0 ; k<4 ;k++){
            int xx = i+dx[k];
            int yy = j+dy[k];
            if(xx>=0 && yy>=0 && xx<n && yy<m && grid[xx][yy] == '1') dfs(grid,xx,yy,n,m);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<pair<int,int>> v;
        int cnt = 0 ; 
        for(int i = 0 ;i <grid.size() ;i++){
            for(int j = 0 ;j<grid[i].size() ;j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    dfs(grid,i,j,grid.size(),grid[i].size());
                }
            }
        }
        return cnt;
    }
};