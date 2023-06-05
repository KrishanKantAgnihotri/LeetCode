class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        vector<pair<int,int>> points;
        for(int i = 0 ;i<v.size() ;i++){
            points.push_back({v[i][0],v[i][1]});
        }
        // sort(points.begin(),points.end());
        int n = points.size();
        if(points.size()==2){
            return true;
        }
        int y = points[1].second-points[0].second;
        int x = points[1].first -points[0].first;
        for(int i = 2 ;i<n ;i++){
            int y1 = points[i].second-points[i-1].second;
            int x1 = points[i].first-points[i-1].first;
            if(y*x1 != y1*x){
                return false;
            }
        }
        return true;
        
    }
};