class Solution {
public:
    vector<int> sumZero(int n) {
        if(n==1) return {0};
        vector<int> ans;
        if(n%2 == 0){
            for(int i = 0 ;i<n/2; i++){
                ans.push_back((i+1));
                ans.push_back(-(i+1));
            }
            return ans;
        }
        for(int i = 0 ;i<(n-1)/2 ;i++){
            ans.push_back((i+1));
            ans.push_back(-(i+1));
        }
        ans.push_back(0);
        return ans;
    }
};