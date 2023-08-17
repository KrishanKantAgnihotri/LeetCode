class MyHashMap {
public:
unordered_map<int,int> u;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        u[key] = value;
    }
    
    int get(int key) {
        if(!u.count(key)) return -1 ; 
        return u[key];
    }
    
    void remove(int key) {
        u.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */