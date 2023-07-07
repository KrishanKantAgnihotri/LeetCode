class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n = s.length();
        map<char,int> m;
        int ans =  0 ; 
        for(int i = 0 ;i<n ;i++){
            m[s[i]]++;
            int cnt = min(m['T'],m['F']);
            if(cnt<=k){
                ans++;
            }
            else{
                m[s[i-ans]]--;
            }
        }
        return ans;
    }
};