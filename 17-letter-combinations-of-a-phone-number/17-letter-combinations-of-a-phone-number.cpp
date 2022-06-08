class Solution {
public:
    map<char,string> m;
    
    vector<string> ans;
    void recur(int i,string s,string a){
        if(i == s.length()) {
            if(a.size()>0)
            ans.push_back(a);
            return ;
        }
        for(int k = 0 ;k<m[s[i]].size();k++){
            recur(i+1,s,a+m[s[i]][k]);
        }
    }
    vector<string> letterCombinations(string digits) {
        m['2'] = "abc";
    m['3'] = "def";
    m['4'] = "ghi";
    m['5'] = "jkl";
    m['6'] = "mno";
    m['7'] = "pqrs";
    m['8'] = "tuv";
    m['9'] = "wxyz";
        recur(0,digits,"");   
            return ans;
    }
};