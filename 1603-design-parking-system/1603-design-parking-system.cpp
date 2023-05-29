class ParkingSystem {
public:
    void faster() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
    }
    
    unordered_map<int, int> Mp;
    ParkingSystem(int big, int medium, int small) {
        faster();
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