class Solution {
public:
    bool isopening(char s){
       return ((s == '(')||(s == '[')||(s=='{'));
    }
    char check(char s){
        if(s  == '(') return ')';
        if(s =='[') return ']';
        if(s == '{') return '}';
        return '-';
    }
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for(int i = 0 ;i<n; i++){
            if(isopening(s[i])){
                st.push(s[i]);
            }
            else{
                if(st.size() ==0) return false;
                if(check(st.top()) == s[i]){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
      return (st.size() == 0);
    }
};