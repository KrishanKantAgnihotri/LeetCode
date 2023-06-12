class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        int n = v.size();
        if(n == 0) return {};
        vector<string> ans;
        long int st = v[0] ;
        long int ed = v[0]+1;  
        for(int i = 1 ;i<n ;i++){
            if(v[i] == ed){
                ed++;
                continue;
            }
            if(ed-st>1){
                ans.push_back(to_string(st)+"->"+to_string(ed-1));
                
            }
            else{
                ans.push_back(to_string(st));
            }
            st = v[i];
            ed = st+1;
        }
    if(ed-st>1){
         ans.push_back(to_string(st)+"->"+to_string(ed-1));
    }
    else{
            ans.push_back(to_string(st));
        }
        return ans;
    }
};