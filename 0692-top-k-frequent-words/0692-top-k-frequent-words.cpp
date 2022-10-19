class Solution {
public:
   
    static bool cmp(pair<string,int> &a,pair<string,int> &b){
            if(a.second == b.second){
                
                return a.first<b.first;
                
            }
            return a.second>b.second;
            
        }
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<pair<string,int>> ans;
        map<string,int> m;
        for(int i = 0 ;i<words.size() ;i++){
            m[words[i]]++;
        }
        for(pair<string,int> p:m){
            ans.push_back(p);
        }
        sort(ans.begin(),ans.end(),cmp);
        vector<string> fans;
        for(int i = 0 ;i<k ;i++){
            fans.push_back(ans[i].first);
        }
        return fans;
    }
};