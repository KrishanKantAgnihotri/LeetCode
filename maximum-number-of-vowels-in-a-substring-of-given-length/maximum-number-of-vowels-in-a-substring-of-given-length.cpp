class Solution {
public:
   bool isvowel(char c){
       return (c=='a' || c=='e'|| c=='i' || c=='o'|| c=='u');
   }
    int maxVowels(string s, int k) {
        int cnt = 0 ; 
        int n = s.length();
        int i = 0 ; 
        for( ; i<k ;i++){
            if(isvowel(s[i])) cnt++;
        }
        int ans = cnt;
        for( ; i<n ;i++){
            if(isvowel(s[i-k])) cnt--;
            if(isvowel(s[i])) cnt++;
            ans = max(ans,cnt);
        }
        return ans;
    }
};