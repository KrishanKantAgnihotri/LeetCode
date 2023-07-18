class LRUCache {
  int c;
public:
  list<pair<int,int>> li;
  unordered_map<int,list<pair<int,int>>::iterator> u;
    LRUCache(int capacity) {
        c = capacity;
    }
    
    int get(int key) {
        if(u.find(key) == u.end()) return -1 ; 

        li.splice(li.begin(),li,u[key]);
        return u[key]->second;
    }
    
    void put(int key, int value) {
        if(get(key) != -1){
            u[key]->second = value;
            return ;
        }
        if(u.size() == c){
            int to_remove = li.back().first;
            li.pop_back();
            u.erase(to_remove);
        }
        li.emplace_front(key,value);
        u[key] = li.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */