#define ff first
#define ss second
class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
        vector<pair<int,int>> v;
        const long long MOD = 1e9+7;
        for(int i = 0 ;i<n ;i++)
        {
            v.push_back({e[i],s[i]});
        }        
        sort(v.rbegin(),v.rend());
        long long int sm = 0 ;
        long long int ans = 0 ; 
        priority_queue<long,vector<long>,greater<long> > pq; 
//         for(int i = 0 ;i<k ;i++){
//             sm+=v[i].ss;
//             pq.push(-v[i].ss);
//             sm%=MOD;
//             ans = max(ans*1LL,(sm*v[i].ff)%MOD );
//         }
        
        for(int i = 0 ;i<n ;i++){
            sm+=v[i].ss;
            pq.push(v[i].ss);
            if(pq.size()>k){
                sm-=pq.top();
                pq.pop();
            }
           
            ans = max(ans,v[i].ff*sm );
        }
        return ans%MOD;
    }
};