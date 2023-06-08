class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
     int n = v.size();
     int m = v[0].size();
     int l = n-1 ; 
     int r = 0;
     int ans = 0; 
     while( (l>=0) && (r<m)){

         while((r<m) && (v[l][r]>=0) ){
             r++;
         }
         ans+=(m-r);
         r--;
          r = max(r,0);
         l--;
     }
     return ans; 

    }
};