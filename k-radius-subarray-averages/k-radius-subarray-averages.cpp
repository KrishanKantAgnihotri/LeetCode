class Solution {
public:
    vector<int> getAverages(vector<int>& v, int k) {
        int n = v.size();
        int i = 0 ; 
        long int sm  = 0 ; 
        vector<int> ans(n,-1);
        if(n<=2*k) return ans;
        while(i<=2*k){
            sm+=v[i];
            i++;
            if(i>n){
                break;
            }
        }
        int j = k ; 
        while(j+k<n){
            ans[j] = sm/(2*k+1);
            sm-=v[j-k];
            j++;
            if(j+k<n){
                sm+=v[j+k];
            }
        }
        return ans;

    }
};