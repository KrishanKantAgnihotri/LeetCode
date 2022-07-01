class Solution {
public:
    int maximumUnits(vector<vector<int>>& v, int m) {
        int n = v.size();
         sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
             return a[1]>b[1];
         });
        int ans = 0 ; 
        for(int i = 0 ;i<n ;i++){
            if(m<=0) continue;
            int can = min(m,v[i][0]);
            m-=can;
            ans+=(can*v[i][1]);
        }
        return ans;
    }
};