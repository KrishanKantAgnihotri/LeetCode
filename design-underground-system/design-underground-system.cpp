class UndergroundSystem {
unordered_map<string,long> u;
unordered_map<int,string> list;
unordered_map<int,int> list2;
unordered_map<string,long> cnt;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        list[id]  = stationName;
        list2[id]  = t;
    }
    
    void checkOut(int id, string stationName, int t) {
        if(list.find(id)!=list.end()){
            string a = list[id];
            int t1 = list2[id];
            int t2 = t;
            string b = stationName;
            u[a+"*"+b]+=(t2-t1);
            cnt[a+"*"+b]++;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return double(u[startStation+"*"+endStation]*1.0/cnt[startStation+"*"+endStation]*1.0);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */