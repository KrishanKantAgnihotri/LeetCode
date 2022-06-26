class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        k = n-k;
        int  f = 0;
        long long int mn = INT_MAX;
        long long int cur = 0 ; 
        for(int i = 0 ;i<k ;i++){
            cur+=v[i];   
        }
        mn = cur;
        for(int i = k ;i<n ;i++){
            cur+=v[i];
            cur-=v[i-k];
            mn = min(cur,mn);
        }
        int ans = 0 ; 
        for(int i = 0  ;i<n ;i++){
            ans+=v[i];
        }
        ans-=mn;
        return ans;
        
    }
};