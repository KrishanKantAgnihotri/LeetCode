class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        map<int,int> u;
        if(v.size() == 0) return 0 ; 
        int n = v.size();
        int mn = INT_MAX;
        for(int i = 0 ;i<n ;i++){
            u[v[i]]++;
            
            mn = min(mn,v[i]);
        }
        int f = mn-1; 
        int cur = 0 ;
        int ans =1 ;
        for(auto it : u){
            // cout<<it.first<<" ";
            if((it.first-f) == 1){
                cur++;
                f = it.first;
            }
            else {
                ans = max(ans,cur);
                cur = 1 ; 
                f = it.first;
            }
        }
        ans = max(ans,cur);
        return ans;
    }
};