class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;
        
        for(auto &bill: bills) {
            if(bill == 5) fives += 1;
            
            else if(bill == 10) {
                if(fives <= 0) return false;
                tens += 1, fives -= 1;
            }
            
            else if(bill == 20) {
                if(fives > 0 and tens > 0) fives -= 1, tens -= 1;
                else if(fives >= 3) fives -= 3;
                else return false;
            }
        }
        return true;
    }
};