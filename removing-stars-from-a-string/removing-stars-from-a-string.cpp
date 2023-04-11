class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();
        for(int i = 0 ;i<n ;i++){
            if(s[i]=='*'){
                st.pop();
            }
            else{
            st.push(s[i]);

            }
        }
        s="";
        while(st.size()){
            s+=st.top();
            st.pop();
        }
        if(s.length()){
            reverse(s.begin(),s.end());
        }
        return s;
    }
};