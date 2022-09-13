class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 1 ; 
        int r = nums.size();
        while(l<=r){
           int mid = (r-l)/2 + l;
           if(nums[mid-1]==target) return mid-1;
            else if(nums[mid-1]>target) r = mid-1;
            else 
                l = mid+1;
        }
        return -1 ; 
    }
};