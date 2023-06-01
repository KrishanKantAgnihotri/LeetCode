class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
         queue<pair<int,int>> q;
         if(grid[0][0] == 1){
             return -1;
         }
         q.push({0,0});
         int a = grid.size();
         int b =  grid[0].size();

         int stp = 0 ;
         int dx[8] = {0,0,1,1,1,-1,-1,-1};
         int dy[8] = {1,-1,1,-1,0,1,-1,0};
         grid[0][0] = 1; 
         while(q.size()>0){
             int x = q.front().first;
             int y = q.front().second;
             if((x == a-1) && (y ==b-1)){
                 return grid[x][y];
             }
             for(int i = 0  ; i<8 ;i++){
                 int xx = dx[i]+x;
                 int yy = dy[i]+y;
                 if(xx>=0 && yy>=0 && xx<a && yy<b && (grid[xx][yy] ==0)){
                     q.push({xx,yy});
                     grid[xx][yy] = grid[x][y]+1;
                 }
             }
             q.pop();
         }   
         return -1; 
    }
};