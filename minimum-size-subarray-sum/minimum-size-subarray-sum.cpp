class Solution {
public:
    int check(vector<int> &v,int x){
        int sm = 0 ; 
        int ans = 0 ;
        int n = v.size(); 
        for(int i = 0 ;i<x ;i++){
            sm+=v[i];
        }
        ans = max(ans,sm);
        for(int i = x ;i<n; i++){
            sm-=v[i-x];
            sm+=v[i];
            ans = max(ans,sm);

        }
        return ans;
    }
    int minSubArrayLen(int t, vector<int>& nums) {
        int l = 1; 
        int r = nums.size();
        int ans = 0;
        while(l<=r){
            int mid = (l+r)/2;
            int x = check(nums,mid);
            //cout<<x<<endl;
            if(x>=t){
                ans = mid;
                r = mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};