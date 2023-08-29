class Solution {
public:
    int bestClosingTime(string c) {
        int n = c.length();
        vector<int> pre(n+1) ;
        vector<int> suff(n+1);
        int ans = INT_MAX;
        for(int i = 0 ;i<n ;i++){
            if(i) pre[i]+= pre[i-1];
            if(c[i] == 'N') pre[i]++;
        }
        for(int i = n-1 ;i>=0 ; i--){
            if(i != n-1) suff[i]+=suff[i+1];
            if(c[i] == 'Y') suff[i]++;
        }
        int fans = 0 ; 
        if(suff[0]<ans){
            ans = suff[0];
            fans = 0 ; 
        }
        for(int i = 0 ;i<n ;i++){
           
            if(suff[i+1]+pre[i]<ans) fans = i+1;
            ans = min(ans,pre[i]+suff[i+1]);
        }
        return fans;
    }
};