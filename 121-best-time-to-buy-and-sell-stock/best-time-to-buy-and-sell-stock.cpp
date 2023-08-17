class Solution {
public:
    int maxProfit(vector<int>& v) {
        int x = INT_MAX; 
        int ans = 0 ; 
        for(int i = 0 ;i<v.size() ;i++){
            ans = max(ans,v[i]-x);
            x = min(x,v[i]);
        }
        return ans;
        
    }
};