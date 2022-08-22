class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> u;
        u['I'] = 1;
        u['V'] =  5;
        u['X'] =  10;
        u['L'] = 50;
        u['C'] = 100;
        u['D'] = 500;
        u['M'] = 1000;
        if(s.length() == 1) return u[s[0]];
        int ans = 0 ; 
        for(int i = s.length()-1 ;i>=0 ;i--){
            if((i+1<=s.length()-1) && u[s[i+1]]>u[s[i]]){
                ans+=(-2*u[s[i]]);
                
            }
                ans+=u[s[i]];
            
        }
        return ans;
        
    }
};