class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int,int>> v;
        for(int i = 0 ;i<n ;i++){
            v.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(v.begin(),v.end(),[&](pair<int,int> a,pair<int,int> b){
            return a.first<b.first; 
        });
        vector<pair<int,int>> ans;
        ans.push_back(v[0]);
        for(int i = 1 ;i<n; i++){
            if(ans.back().second>=v[i].first){
                pair<int,int> a = ans.back();
                ans.pop_back();
                ans.push_back({a.first,max(a.second,v[i].second)});
                
            }
            else {
                ans.push_back(v[i]);
            }
        }
        vector<vector<int>> fans;
        for(int i =  0 ;i<ans.size() ;i++){
            vector<int> tmp;
            tmp.push_back(ans[i].first);
            tmp.push_back(ans[i].second);
            fans.push_back(tmp);
            tmp.clear();
        }
        return fans;
    }
};