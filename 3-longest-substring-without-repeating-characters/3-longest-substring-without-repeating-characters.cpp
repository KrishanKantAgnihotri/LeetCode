class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0 ;
        int j = 0 ; 
        int ans = 0 ; 
        unordered_map<char,int> last;
        for( ; j<n ;j++){
            if(last.count(s[j])){
                i = max(last[s[j]],i);
            }
            ans = max(ans,j-i+1);
            last[s[j]] = j+1;
        }
        return ans;
    }
};