class Solution {
    public int missingNumber(int[] nums) {
        int ans = 0 ; 
        int n = nums.length;
        for(int i = 1 ;i<=n;i++) ans = ans^i;
        for(int i = 0 ;i<nums.length ;i++){
            ans = ans^nums[i];
        }
        return ans;
    }
}