class Solution {
public:
    bool check(string s){
        int n = s.length();
        int i = 0 ; 
        int j = n-1 ;
        while(i<j){
            if(s[i] != s[j]) return false; 
            i++,j--;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        bool ok  = check(s);
        if(ok) return 1;
        map<char,int> m;
        for(int i = 0 ;i<s.length() ;i++){
            m[s[i]]++;
        }
        return m.size();
        
    }
};