class SmallestInfiniteSet {
unordered_map<int,int> u;
priority_queue<int,vector<int>,greater<int>> pq;
public:
    SmallestInfiniteSet() {
        for(int i = 1  ;i<=1000 ;i++){
            u[i] = 1;
            pq.push(i);
        }
    }
    
    int popSmallest() {
        int ans =pq.top();
        pq.pop();
        u[ans] = 0 ; 
        return ans;
    }
    
    void addBack(int num) {
        if(u[num] == 0){
            u[num] = 1;
            pq.push(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */