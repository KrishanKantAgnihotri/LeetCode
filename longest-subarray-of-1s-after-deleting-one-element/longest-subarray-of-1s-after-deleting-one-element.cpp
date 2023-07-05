class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n+1);
        int cur = 0 ; 
        for(int i =0 ;i<n ;i++){
            if(nums[i]==0){
                pre[i] = cur;
                cur = 0 ; 
                continue;
            }
            cur++;
        }
        if(cur == n) return n-1;
        int ans = 0;
        cur = 0 ; 
        for(int i = n-1 ;i>=0 ;i--){
            if(nums[i] == 0){
                ans = max(ans,pre[i]+cur);
                cur = 0 ; 
                 continue;
            }
            cur++;
        }
        return ans;

    }
};