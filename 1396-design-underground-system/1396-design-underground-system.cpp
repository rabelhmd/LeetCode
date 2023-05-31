class UndergroundSystem {
public:
    
    unordered_map <string, pair <long long, int>> elapsedTime;
    unordered_map <int, pair <string, int>> checkInInfo;
    
    UndergroundSystem() {
        elapsedTime.clear();
        checkInInfo.clear();
    }
    
    void checkIn(int id, string stationName, int t) {
        if(checkInInfo.find(id) != checkInInfo.end()) return;
        checkInInfo[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto& info = checkInInfo[id];
        string key = info.first + ":" + stationName;
        int time = t - info.second;
        
        if(elapsedTime.find(key) != elapsedTime.end()) {
            auto& it = elapsedTime[key];
            it.first += time;
            it.second += 1;
        } else {
            elapsedTime[key] = {time, 1};
        }
        checkInInfo.erase(id);
    }
    
    double getAverageTime(string s, string e) {
        string key = s + ":" + e;
        auto& info = elapsedTime[key];
        return (double) info.first / (double) info.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */