class Solution {
public:
    map<char,vector<char>> m;
    vector<string> fans;
    void solve(int i,string &s,string cur){
        if(i == s.length()){
            if(cur.size())
            fans.push_back(cur);
            return;
        }
        vector<char> c = m[s[i]];
        for(int j = 0 ; j<c.size();j++){
            solve(i+1,s,cur+c[j]);
        }
    }

      
    vector<string> letterCombinations(string d) {
        m['2'] = {'a','b','c'};
        m['3'] = {'d','e','f'};
        m['4'] = {'g','h','i'};
        m['5'] = {'j','k','l'};
        m['6'] = {'m','n','o'};
        m['7'] = {'p','q','r','s'};
        m['8'] = {'t','u','v'};
        m['9'] = {'w','x','y','z'};
        solve(0,d,"");
        return fans;

    }
};