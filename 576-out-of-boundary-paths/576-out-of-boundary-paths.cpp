class Solution {
public:
    vector<vector<vector<int>>> dp;
    int m1;
    int n1;
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    int calc(int i,int j,int mov){
        if(i<0 || j<0 || i>=m1 || j>=n1) return 1;
        if(mov == 0){
            return 0 ; 
        }
        if(dp[i][j][mov]!=-1) return dp[i][j][mov];
        int ans = 0 ; 
        for(int k = 0 ;k<4 ;k++){
              int xx = dx[k]+i;
              int yy = dy[k]+j;
            ans = (ans+calc(xx,yy,mov-1))%(1000000000+7);
            
        }
        return dp[i][j][mov] = ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
      dp.resize(m+2,vector<vector<int>>(n+2,vector<int>(maxMove+1,-1)));
        m1 = m;
        n1 = n;
        return calc(startRow,startColumn,maxMove);
        
    }
    
};