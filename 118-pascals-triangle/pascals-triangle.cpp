class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> sol(n+1,vector<int>(n+1));
        sol[1][1] = 1;
        for(int i = 1 ;i<=n ;i++){
            for(int j = 1 ;j<=i; j++){
                sol[i][j]+=sol[i-1][j-1];
                sol[i][j]+=sol[i-1][j];
            }
        }
        // return sol;
        vector<vector<int>> ans(n,vector<int>());
        for(int i = 1 ;i<=n ;i++){
            for(int j = 1 ;j<=i;j++){
                ans[i-1].push_back(sol[i][j]);
            }
        }
        return ans;
     }
};