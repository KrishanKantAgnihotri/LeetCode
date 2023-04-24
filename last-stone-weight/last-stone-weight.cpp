class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i = 0 ;i<stones.size() ;i++){
            pq.push(stones[i]);
        }
        while(pq.size()>=2){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a-=b;
            if(a) pq.push(a);
        }
        if(pq.size() == 0) return 0; 
        return pq.top();
    }
};