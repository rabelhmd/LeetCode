class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big, int medium, int small) {
        this -> big = big, this -> medium = medium, this -> small = small;
    }
    
    bool addCar(int type) {
        if(type == 1) {
            big -= 1;
            return (big >= 0) ? true : false;
        }
        if(type == 2) {
            medium -= 1;
            return (medium >= 0) ? true : false;
        }
        if(type == 3) {
            small -= 1;
            return (small >= 0) ? true : false;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */