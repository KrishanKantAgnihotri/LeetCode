class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        map<int,int> m;
        int n = v.size();;
        for(int i = 0 ;i<n ;i++){
            m[v[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : m){
            pq.push({it.second,it.first});
        }
        int c = 0 ; 
        vector<int> ans;
        while(c<k){
            c++;
            int t = pq.top().second;
            ans.push_back(t);
            pq.pop();
        }
        return ans;
    }
};