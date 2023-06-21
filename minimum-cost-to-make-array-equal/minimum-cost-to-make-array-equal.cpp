class Solution {
public:
#define ll long long

    ll check(vector<int>&v,vector<int>&c,ll x){
        ll sm = 0 ; 
        for(int i = 0 ;i<v.size();i++){
            sm+=(1L*abs(v[i]-x)*c[i]);
        }
        return sm;
    }
    long long minCost(vector<int>& v, vector<int>& c) {
        int n = v.size();   
        ll l = 1;
        ll r = 1000000;
        ll ans = check(v,c,1);
        while(l<r){
            ll mid = (l+r)/2;
            ll a1 = check(v,c,mid);
            ll a2 = check(v,c,mid+1);
            ans = min(ans,min(a1,a2));
            if(a1<a2){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
#undef ll
};