class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
          int over = 1 ; 
          int last = INT_MIN;
          sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
              return b[0]>a[0];
          });
          int ans = 0 ; 
          for(int i = 0 ;i<v.size() ;i++){
              if(v[i][0]>=last){
                  ans+=(over-1);
                  over = 1;
                  last = v[i][1];
              }
              else {
                  over++;
                  last = min(last,v[i][1]);
              }
          }
          return ans + (over-1);
    }
};