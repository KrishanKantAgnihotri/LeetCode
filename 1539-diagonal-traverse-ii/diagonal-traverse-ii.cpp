class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int,vector<int>> m;
        for(int i = 0 ;i<nums.size() ;i++){
            for(int j = 0 ;j<nums[i].size() ;j++){
                m[i+j].push_back(nums[i][j]);
            }
        }
        int n = m.size();
        vector<int> ans;
        for(auto it : m){
            vector<int> v = it.second;
            reverse(v.begin(),v.end());
            for(int i  = 0 ; i<v.size() ;i++){
                ans.push_back(v[i]);
            }
        }
        return ans;
        
    }
};