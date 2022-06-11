class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int cur = 0 ; 
        for(int i = 0 ;i<nums.size() ;i++){
            cur+=nums[i];
        }
        x = cur-x;
        if(x<0){
            return -1;
        }
        if(x == 0){
            return nums.size() ;
        }
        int l = 1 ; 
        int r = 2 ;
        cur = nums[0] ;
        int ans = 0 ; 
        for(  ;r<=nums.size() ;r++){
            if(cur==x){
                ans = max(ans,r-l);
            }
            else if(cur>x){
                while(cur>x){
                    cur-=nums[l-1];
                    l++;
                }
                if(cur == x){
                    ans = max(ans,r-l);
                }
            }
            cur+=nums[r-1];
        }
        if(cur == x){
            ans = max(ans,r-l);
        }
        if(cur>x){
            while(cur>x){
                cur-=nums[l-1];
                l++;
            }
            if(cur == x){
                ans = max(ans,r-l);
            }
        }
        if(ans == 0) return -1;
        return nums.size()-ans;
    }
};