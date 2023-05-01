class Solution {
public:
    double average(vector<int>& v) {
        int mx = *max_element(v.begin(),v.end());
        int mn = *min_element(v.begin(),v.end());
        long int sm = 0 ; 
        int cnt = 0 ;
        for(int i = 0 ;i<v.size() ;i++){
            if(v[i] == mx) continue;
            if(v[i] == mn) continue;
            sm+=v[i];
            cnt++;
        }
        double ans = (sm*1.0)/(cnt*1.0);
        return ans;
    }
};