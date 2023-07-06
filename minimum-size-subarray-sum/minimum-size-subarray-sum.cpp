class Solution {
public:
    int minSubArrayLen(int t, vector<int>& v) {
        int n = v.size();
        int l = 0 ; 
        int r = 0 ; 
        int ans = INT_MAX ; 
        int sm = 0 ; 
        while(r<v.size()){
            sm+=v[r++];
            while(sm>=t){
                ans = min(ans,r-l);
                sm-=v[l++];
            }
        }
        return ans == INT_MAX?0:ans;
    }
};