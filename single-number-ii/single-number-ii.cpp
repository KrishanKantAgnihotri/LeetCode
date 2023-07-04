class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0 ; 
        for(int i = 0 ;i<32 ;i++){
            int msk = (1<<i);
            int c = 0 ; 
            for(auto it : nums){
                if(it&msk){
                    c++;
                }
            }
            if(c%3 == 1){
                ans|=msk;
            }

        }
        return ans;
    }
};