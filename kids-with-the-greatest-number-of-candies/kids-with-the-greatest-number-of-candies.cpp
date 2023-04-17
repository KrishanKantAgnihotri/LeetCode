class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int e) {
        int n = v.size();
        int mx = *max_element(v.begin(),v.end());
        vector<bool> ans;
        for(int i = 0 ;i<n; i++){
            if(v[i]+e>=mx) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};