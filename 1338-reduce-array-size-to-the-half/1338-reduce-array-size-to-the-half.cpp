class Solution {
public:
    int minSetSize(vector<int>& v) {
        unordered_map<int,int> u;
        for(int i = 0 ;i<v.size() ;i++){
            u[v[i]]++;
        }
        vector<pair<int,int>> v2;
        for(auto it : u){
            v2.push_back(it);
        }
        sort(v2.begin(),v2.end(),[&](pair<int,int> a,pair<int,int> b){
            return a.second>b.second;
        });
        int ans = 0 ; 
        int sm = 0 ; 
        for(int i = 0 ;i<v2.size() ;i++){
            sm+=v2[i].second;
            ans++;
            if(sm>=(v.size())/2) break;
        }
        return ans;
    }
};