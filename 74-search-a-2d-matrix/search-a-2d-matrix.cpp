class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int n = v.size();
        int m = v[0].size();
        int l = 0 ; 
        int r = n*m-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int xx = mid/m;
            int yy = mid%m;
            if(t == v[xx][yy]){
                return true;
            }
            else if(v[xx][yy]>t){
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return false;
    }
};