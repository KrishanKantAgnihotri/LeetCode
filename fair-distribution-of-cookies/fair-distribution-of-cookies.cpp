class Solution {
public:
int res = INT_MAX ; 
    int distributeCookies(vector<int>& v, int k) {
       vector<int> tmp(k,0);
       solve(v,tmp,0,0);
       return res;
    }
    int solve(vector<int> &v,vector<int> &tmp,int id,int mx){
        if(id>=v.size()){
            res = min(res,mx);
            return res;
        }
        int cur = v[id];
        for(int i = 0 ;i<tmp.size() ;i++){
            tmp[i]+=cur;
            solve(v,tmp,id+1,max(mx,tmp[i]));
            tmp[i]-=cur;
        }
        return 0;
    }
};