class Solution {
public:
    bool validateStackSequences(vector<int>& a, vector<int>& b) {
        int n = a.size() ;
        stack<int> st;
        int j = 0 ;
        int i = 0 ;  
        for( ;i<n ;i++){
            st.push(a[i]);
            while((j<n&&(st.size()))&&(b[j] == st.top())){
                st.pop();
                j++;
            }
        }
        while((j<n&&(st.size()))&&(b[j] == st.top())){
                st.pop();
                j++;
        }
        return (i == j);
    }
};