class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& v1, vector<int>& v2) {
        unordered_map<int,int> u;
        unordered_map<int,int> u2;
        for(int i = 0 ;i<v1.size(); i++){
            u[v1[i]]++;
        }
        for(int j = 0 ;j<v2.size();j++){
            u2[v2[j]]++;
        
        }
        vector<vector<int>> ans(2);
        for(int i = 0 ;i<v1.size() ;i++){
            if(u2[v1[i]]==0){
                ans[0].push_back(v1[i]);
                u2[v1[i]]++;
            }
        }
        for(int i = 0 ;i<v2.size() ;i++){
            if(u[v2[i]]==0){
                ans[1].push_back(v2[i]);
                u[v2[i]]++;
            }
        }
        return ans;
}
};