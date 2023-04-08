class Solution {
public:
    void solve(int n,string &s,int sm,vector<string> &ans){
        if(s.size() >= 2*n){
            ans.push_back(s);
        }
        else{
            if(s.size()-sm<n){
                s+='(';
                solve(n,s,sm,ans);
                s.resize(s.size()-1);

            }
            if(s.size()>2*sm){
               s+=')';
               solve(n,s,sm+1,ans);
               s.resize(s.size()-1);
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "(";
        vector<string> ans;
        solve(n,s,0,ans);
        return ans;
    }
};