class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x = 0 ; 
       sort(nums.begin(),nums.end());
       for(int i = 1 ;i<nums.size(); i++){
           if(nums[i] == nums[i-1]){
               x = nums[i];
               break;
           }
       }
        return x;
    }
};