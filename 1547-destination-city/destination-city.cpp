class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> u;
        for(int i = 0 ;i<paths.size() ;i++){
            u[paths[i][0]]++;
            if(!u.count(paths[i][1])) u[paths[i][1]]=0;
        }
        for(auto it : u) {
            if(it.second == 0) return it.first;
        }
        return "";
    }
};