class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        set<int> s;
        unordered_map<int,int> u;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ;i<k ;i++){
            if(!u.count(nums[i])){
                s.insert(nums[i]);
            }
            u[nums[i]]++;
        }
        ans.push_back(*s.rbegin());
        for(int i = k ;i<n ;i++){
            u[nums[i-k]]--;
            u[nums[i]]++;
            if(u[nums[i]]==1){
                if(s.find(nums[i])==s.end()) s.insert(nums[i]);
            }
            if(u[nums[i-k]]==0) s.erase(nums[i-k]);
            ans.push_back(*s.rbegin());
        }
        return ans;

    }
};