class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0 ; 
        int n = nums.size();
        for(int i = 1 ;i<=n+1 ;i++){
            ans^=i;
        }
        for(int i = 0 ;i<n ;i++){
            ans^=(nums[i]+1);
        }
        return ans-1;
    }
};