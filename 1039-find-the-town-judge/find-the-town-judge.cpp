class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int cnt = 0; 
        int ans =  -1; 
        if(n == 1) return 1;
        unordered_map<int,int> u;
        unordered_map<int,int> v;
        for(int i = 0 ;i<trust.size() ;i++){
            u[trust[i][1]]++;
            v[trust[i][0]]++;
        }

        for(auto it : u){
            if(it.second == n-1 && (v[it.first]==0)){
                ans = it.first;
                cnt++;
            }
        }
        if(cnt>1) return -1;
        return ans;
    }
};