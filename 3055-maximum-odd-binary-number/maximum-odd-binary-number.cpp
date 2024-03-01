class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ans = 0 ; 
        for(int i = 0 ;i<s.length() ;i++){
            if(s[i] == '1') ans++;
        }
        int n = s.length();
        for(int i = 0 ;i<n-1; i++){
            if(ans>1){
                ans--;
                s[i] = '1';
            }
            else s[i] = '0';
        }
        s[n-1] = '1';
        return s;
    }
};