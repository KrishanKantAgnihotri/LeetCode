class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        int l = 0 ; 
        if(nums.size() == 0) return 0 ; 
        m[nums[0]]++;
        int cur = nums[0];
        int ans = 0 ; 
        ans = max(ans,cur);
        int len = 1 ; 
        for(int i = 1 ;i<n ;i++){
            cur+=nums[i];
            if(m[nums[i]]){
                m[nums[i]]--;
                while(nums[l]!=nums[i]){
                    cur-=nums[l];
                    m[nums[l]]--;
                    l++;
                }
                cur-=nums[l];
                l++;
                
            }
            m[nums[i]]++;
            ans = max(ans,cur);
        }
        return ans;
    }
};