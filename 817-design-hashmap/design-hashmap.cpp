class MyHashMap {
    vector<int> u;
public:

    MyHashMap() {
        u.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        u[key] = value;
    }
    
    int get(int key) {
        return u[key];
    }
    
    void remove(int key) {
        u[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */