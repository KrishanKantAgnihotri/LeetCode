class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> f,st;
        for(int i = 0 ;i<nums.size() ;i++){
            f[nums[i]]++;
        }
        for(int i = 0 ;i<nums.size() ;i++){
            if(!f[nums[i]]) continue;
            f[nums[i]]--;
            if(st[nums[i]-1]>0){
                st[nums[i]-1]--;
                st[nums[i]]++;
            }
            else if(f[nums[i]+1]>0 && f[nums[i]+2]>0){
                f[nums[i]+1]--;
                f[nums[i]+2]--;
                st[nums[i]+2]++;
            }
            else 
                return false;
        }
        for(auto it : f) {
            if(it.second<0) return false;
        }
        return true;
    }
};