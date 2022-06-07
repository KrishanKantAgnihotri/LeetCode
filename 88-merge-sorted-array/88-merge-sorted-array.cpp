class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> one(m+1);
        for(int i= 0 ; i<m ;i++) one[i] = nums1[i];
        int i = 0 ; 
        int j = 0 ;
        int k = 0 ; 
        while(i<m && j<n){
            if(one[i]>nums2[j]){
                nums1[k] = nums2[j];
                j++,k++;
            }
            else{
                nums1[k] =one[i];
                i++,k++;
            }
        }
        while(i<m){
            nums1[k]  = one[i];
            k++,i++;
        }
        while(j<n){
            nums1[k] = nums2[j];
            k++,j++;
        }
    }
};