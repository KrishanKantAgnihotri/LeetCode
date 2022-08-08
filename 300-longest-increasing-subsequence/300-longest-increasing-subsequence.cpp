class Solution {
public:
    vector<vector<int>> dp;
    int calc(int i,vector<int>& nums,int prev){
        if(i>=nums.size()) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int pick = 0 ;
        int dont = calc(i+1,nums,prev);
        if(prev == -1||nums[i]>nums[prev])
            pick = 1+calc(i+1,nums,i);
        else 
            pick = calc(i+1,nums,prev);
        return dp[i][prev+1] = max(pick,dont);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n+1,vector<int>(n+1,-1));
        return calc(0,nums,-1);
            
        
    }
};