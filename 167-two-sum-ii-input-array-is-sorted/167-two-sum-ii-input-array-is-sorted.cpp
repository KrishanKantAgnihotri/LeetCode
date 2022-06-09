class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int> ans(2);
        ans[0] = - 1; 
        ans[1] = -1;
        int i = 0  ; 
        int j = v.size()-1;
        while(i<j){
            if(v[i]+v[j] == target){
                ans[0] = i+1 ; 
                ans[1] = j+1;
                return ans;
            }
            else if(v[i]+v[j]>target){
                j--;
                
            }
            else {
                i++;
            }
        }
        return ans;
    }
};