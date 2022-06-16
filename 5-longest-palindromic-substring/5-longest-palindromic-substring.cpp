class Solution {
public:
    string longestPalindrome(string s) {
         int ans = 1 ;
        int n = s.length();
        int left = 1 ; 
        int right = 1 ;
        int ansl = left;
        int ansr = right;
        for(int i = 1;i<=n; i++){
            right = i ; 
            while(right<=n && (s[i-1] == s[right-1])) right++;
            left = i-1 ; 
            while(left>=1 && right<=n && (s[left-1] == s[right-1]) ){
                left--;
                right++;
            }
            if(left<1){
                left++;
                right--;
            }
            if(right>n){
                left++,right--;
            }
            if(s[left-1]!=s[right-1]){
                left++,right--;
            }
            // cout<<left<<" "<<right<<endl;
            if(right-left+1>ans){
                ans =right-left+1;
                ansl = left;
                ansr = right;
            }
        }
        string res = "";
        for(int i = ansl-1;i<ansr ;i++){
            res+=s[i];
        }
        return res;
        
    }
};