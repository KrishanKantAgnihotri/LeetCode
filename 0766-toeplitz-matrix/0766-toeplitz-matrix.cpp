class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ;i<n ;i++){
            int xx = i;
            int y = 0;
            set<int> s;
            for(; (y<m) && (xx<n) ;y++,xx++){
                s.insert(mat[xx][y]);
            }
            if(s.size()>1) return false;
        }
        for(int i = 0 ;i<m ;i++){
            int xx = i;
            int y = 0;
            set<int> s;
            for(; (y<n) && (xx<m) ;y++,xx++){
                s.insert(mat[y][xx]);
            }
            if(s.size()>1) return false;
        }
        return true;
    }
};