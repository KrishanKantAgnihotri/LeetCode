class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
     int n = nums.size();
     long long int sm = 0 ;
    if(n <=1) return 0;
     for(int i = 0 ;i<n ;i++){
         sm+=nums[i];
     }
        int mn = INT_MAX;
        int ans = n+1;
        int cnt = 0 ; 
        long long int left = 0 ; 
        long long int right = 0 ; 
        int l = 0 ; 
        int r = n-1;
        for(int i =0 ;i<n ;i++){
           left+=nums[l];
           right=sm - left;
           cnt++;
            l++,r--;
           int cur = 0 ; 
            if(n-cnt!=0)
            cur = abs((left/cnt) - right/(n-cnt));
            else 
                cur = abs(left/cnt);
            if(mn>cur){
                ans = i;
                mn = cur;
            }
            
        }
        return ans;
        
    }
};