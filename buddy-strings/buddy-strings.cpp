class Solution {
public:
    bool buddyStrings(string a, string b) {
        int cnt = 0 ; 
        if(a.length()!=b.length()) return false;
        int f1[26] = {0};
        int f2[26] ={0};
        for(int i = 0 ; i<a.length();i++){
            if(a[i]!=b[i]) cnt++;
            f1[a[i]-'a']++;
            f2[b[i]-'a']++;
        }
        bool ok = false;
        for(int i = 0 ; i<26 ;i++){
            if(f1[i]!=f2[i]) return false;
        }
        for(int i = 0 ; i<26 ;i++){
            if(f1[i]>=2) ok = true;
        }
        if((cnt == 2)) return true;
        if(cnt==0){
            if(ok) return true;
        }
        return false;
        
    }
};