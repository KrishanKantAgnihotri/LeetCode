class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int,int>> q;
        for(int i = 0 ;i<n;i++){
            for(int j = 0 ;j<m ;j++){
                if(mat[i][j] == 0) q.push({i,j});
                else mat[i][j] = -1; 
            }
        }
        vector<pair<int,int>> dir;
        dir.push_back({0,1});
        dir.push_back({1,0});
        dir.push_back({0,-1});
        dir.push_back({-1,0});
        
        while(!q.empty()){
            int k = q.size();
            for(int i = 0 ;i<k ;i++ ){
                auto [x,y] = q.front();
                q.pop();
                for(auto [ii,jj] : dir){
                    int xx = x+ii;
                    int yy = y+jj;
                    if(xx>=0 && yy>=0 && xx<n && yy<m && (mat[xx][yy]==-1)){
                        mat[xx][yy] = mat[x][y]+1;
                        q.push({xx,yy});
                    }
                }
            }
        }
        return mat;
    }
};