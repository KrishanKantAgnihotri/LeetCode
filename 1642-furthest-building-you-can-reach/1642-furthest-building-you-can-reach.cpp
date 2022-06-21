class Solution {
public:
    int furthestBuilding(vector<int>& v, int a, int b) {
     priority_queue<int> pq;
        int i = 0 ; 
        int n = v.size();
        for( ;i<n-1 ;i++){
            if(v[i]>=v[i+1]) continue;
            int cur = v[i+1]-v[i];
            if(a>=cur){
                a-=cur;
                pq.push(cur);
            }
            else if(b>0){
                    if( (pq.size()>0) &&(pq.top()>cur)){
                        a+=(pq.top()-cur);
                        pq.pop();
                        pq.push(cur);
                        
                    }
                    b--;
                }
                else {
                    break;
                }
            
        }
        return i;
    }
};