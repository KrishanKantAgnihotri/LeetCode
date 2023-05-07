class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& v) {
        int n = v.size();
        vector<int> lis;
        for(int i = 0 ;i<n ;i ++){
            int t = v[i];
            if((lis.size() == 0) || (lis[lis.size()-1]<=t)){
                lis.push_back(v[i]);
                v[i] = lis.size();
            }
            else{
                int id =upper_bound(lis.begin(),lis.end(),t)-lis.begin();
                lis[id] = t;
                v[i] = id+1;
            }
        }
        return v;
    }
};