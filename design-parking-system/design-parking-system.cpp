class ParkingSystem {
int b,m,s;
public:
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            int cur = b;
            if(cur>0)
            b--;
            return cur>0;
        }
        else if(carType == 2){
            int cur = m;
            if(cur>0)
            m--;
            return cur>0;
        }
        else{
            int cur = s;
            if(cur>0)
            s--;
            return cur>0;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */