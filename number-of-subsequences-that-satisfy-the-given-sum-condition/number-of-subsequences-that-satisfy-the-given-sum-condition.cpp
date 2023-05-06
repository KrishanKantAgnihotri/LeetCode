class Solution {
public:
    int numSubseq(vector<int>& v, int t) {
        int n= v.size();
        sort(v.begin(),v.end());
        vector<int> p(n,1);
        int m = 1e9+7;
        for(int i = 1 ;i<n ;i++){
           p[i] = (p[i-1]*2)%m;
        }
        int l = 0 ; 
        int r = v.size()-1;
        int ans = 0; 
        while(l<=r){
            if(v[l]+v[r]>t){
                r--;
            }
            else{
                ans = (ans + p[r-l]%m)%m;
                l++;
            }
        }
        return ans;
    }
};