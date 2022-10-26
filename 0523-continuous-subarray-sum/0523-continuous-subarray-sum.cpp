class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> nums2(nums.size());
        if(nums.size() == 1) return false;
        for(int i = 0 ;i<nums.size(); i++){
            nums2[i] = nums[i];
            nums[i]%=k;
            if(i)
                nums[i] = (nums[i]+nums[i-1])%k;
            if( (nums[i]==0)&&(nums2[i]%k) ){
                return true;
            }
        }
        map<int,int> m;
        for(int i = 0  ;i<nums.size() ;i++){
            
            if(m.count(nums[i])){
                if((i+1)-m[nums[i]]>1)    
                return true;
                if(nums[i] == 0){
                    return true;
                }
            }
            if(!m.count(nums[i]))
            m[nums[i]]= i+1;
        }
        
        return false;
    }
};