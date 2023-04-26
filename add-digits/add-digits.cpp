class Solution {
public:
    int conv(int num){
        string s = to_string(num);
        int ans = 0 ; 
        for(int i = 0 ;i<s.length() ;i++){
            ans+=(s[i]-'0');
        }
        return ans;
    }
    int addDigits(int num) {
        while((num/10)!=0){
            num = conv(num);
        }
        return num;
    }
};