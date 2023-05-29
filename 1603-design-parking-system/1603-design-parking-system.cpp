class ParkingSystem {
public:
    unordered_map<int, int> Mp;
    ParkingSystem(int big, int medium, int small) {
        Mp[1] = big;
        Mp[2] = medium;
        Mp[3] = small;
    }
    
    bool addCar(int type) {
        if(Mp[type]-- > 0) return true;
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */