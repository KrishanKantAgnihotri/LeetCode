class MyHashSet {
public:
    unordered_map<int,int> u;
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        u[key]++;
    }
    
    void remove(int key) {
        u[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        if(u[key]==0)
            return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */