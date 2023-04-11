class Solution {
public:
    string removeStars(string s) {
        int cnt = 0 ;
        string res = ""; 
        for(int i = s.length()-1;i>=0 ;i--){
            if(s[i] == '*'){
                cnt++;
            }
            else{
                if(cnt>0){
                    cnt--;
                }
                else{
                    res+=s[i];
                }
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};