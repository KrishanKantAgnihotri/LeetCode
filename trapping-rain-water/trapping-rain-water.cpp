class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size();
        vector<int> pre(n),suf(n);
        for(int i = 0 ;i<n ;i++){
            if(i){
                pre[i] = max(pre[i-1],v[i]);
            }
            else{
                pre[i] = v[i];
            }
        }
        for(int i = n-1 ;i>=0 ;i--){
            if(i == n-1){
                suf[i] = v[i];
            }
            else{
                suf[i] = max(suf[i+1],v[i]);
            }
        }
        int ans = 0 ; 
        for(int i = 0 ;i<n ;i++){
          int level = min(suf[i],pre[i]);
          ans+=max(0,(level-v[i]));
        }
        return ans;
    }
};