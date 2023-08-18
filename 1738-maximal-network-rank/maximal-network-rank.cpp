class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
         vector<int> deg(n);
         unordered_map<string,int> u;
         for(int i = 0 ;i<roads.size() ;i++){
             deg[roads[i][0]]++;
             deg[roads[i][1]]++;
             u[to_string(roads[i][0])+"_"+to_string(roads[i][1])]++;
         }
         int ans = 0 ; 
         for(int i = 0 ;i<n ;i++){
             for(int j = 0 ;j<n ;j++){
                 if(i == j) continue;
                 ans = max(ans,deg[i]+deg[j]-u[to_string(i)+"_"+to_string(j)]-u[to_string(j)+"_"+to_string(i)]);
             }
         }
         return ans;
    }
};