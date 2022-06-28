class Solution {
public:
    int minDeletions(string s) {
        map<char,int> m;
        for(int i = 0 ;i<s.length(); i++){
            m[s[i]]++;
        }
        
        priority_queue<int> pq;
        for(auto it : m){
            pq.push(it.second);
        }
        int ans = 0 ; 
        while(pq.size()>0){
            int cur = pq.top();
            pq.pop();
            if(pq.size()>0){
                if(pq.top() == cur){
                    cur--;
                    ans++;
                    if(cur>0) pq.push(cur);
                }
            }
        }
        return ans;
        
        
    }
};