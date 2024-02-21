class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sz = n+m-1;
        int i = m-1;
        int j = n-1 ; 
        //start filling from behind as 0's are at end
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[sz--] = nums1[i--];
            }
            else {
                nums1[sz--] = nums2[j--];
            }
        }
    }
};