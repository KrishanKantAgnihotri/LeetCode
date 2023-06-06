class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& v) {
        if(v.size() == 2) return true;
        sort(v.begin(),v.end());
        int d = v[1]-v[0];
        bool ok1 = true;
        int n = v.size();
        for(int i = 2 ;i<n ;i++){
            if(v[i]-v[i-1] != d){
                ok1 = false;
            }
        }
        d = v[n-1]-v[n-2];
        bool ok2 = true;
        for(int i = n-2 ;i>=0 ;i--){
            if(v[i+1]-v[i] !=d) {
                ok2 = false;
            }
        }
        return ok1|ok2;
    }
};