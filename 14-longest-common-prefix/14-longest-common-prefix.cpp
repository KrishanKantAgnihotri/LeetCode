class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() ==1) return strs[0];
        int mx = strs[0].size();
        for(int i = 1 ;i<strs.size() ;i++){
            int cur = 0 ;  
            for(int j = 0 ;j<min(strs[i].size(),strs[0].size()) ;j++){
                if(strs[i][j] != strs[0][j] ){
                    break;
                }
                cur++;
            }
            // cout<<cur<<endl;
            mx = min(mx,cur);
        }
        return strs[0].substr(0,mx);
    }
};