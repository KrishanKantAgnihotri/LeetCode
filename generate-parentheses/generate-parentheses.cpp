class Solution {
public:
    bool check(string s){
        int c =0 ; 
        for(int i = 0 ;i<s.length() ;i++){
            if(s[i] == '(') c++;
            else c--;
            if(c<0) return false;
        }
        return c == 0;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        n*=2;
        for(long long int i = 0 ;i<(1LL<<n)  ;i++){
            string s = "";
            for(int j = 0 ;j<n ;j++){
                if((i)&(1<<j)){
                    s+=')';
                }
                else{
                    s+='(';
                }
            }
            if(check(s)){
                ans.push_back(s);
            }
        }
        return ans;
    }
};