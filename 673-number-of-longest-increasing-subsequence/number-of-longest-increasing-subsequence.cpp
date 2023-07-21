class Solution {
public:
    int findNumberOfLIS(vector<int>& v) {
        int n = v.size();
        vector<int> cnt(n,1);
        vector<int> lis(n,1);
        int mx = 1; 
        for(int i = 1 ;i<n ;i++){
            for(int j = 0 ;j<i ; j++){
                if(v[i]>v[j]){
                    if(lis[j]+1>lis[i]){
                        lis[i] = lis[j]+1;
                        cnt[i] = cnt[j];
                    }
                    else if(lis[j]+1==lis[i]){
                        cnt[i]+=cnt[j];
                    }
                }
            }
            mx = max(mx,lis[i]);
        }
        int ans = 0;
        for(int i = 0 ;i <n ;i++){
            if(lis[i] == mx) ans+=cnt[i];
        }
        return ans;
        
    }
};


