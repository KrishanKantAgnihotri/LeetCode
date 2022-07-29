class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0 ; 
        for(int i = 0 ;i<32 ;i++){
            int msk = (1<<i);
            int sm = 0 ; 
           for(auto it: nums){
               if(it&msk){
                   sm++;
               }
           }
            if(sm%3==1)
                ans|=msk;
        }
        return ans;
    }
};