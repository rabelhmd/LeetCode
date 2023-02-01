class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double> ret;
        ret.push_back(c + 273.15); 
        ret.push_back(c * 1.80 + 32.00);
        return ret;
    }
};