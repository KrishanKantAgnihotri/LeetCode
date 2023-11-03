class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int cur = 1; 
        for(int i= 0 ; i<target.size();i++){
            while(cur!=target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                cur++;
            }
            cur++;
            ans.push_back("Push");
        }
        return ans;
    }
};