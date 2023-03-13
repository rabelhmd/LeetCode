class Solution {
public:
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day   = stoi(date.substr(8));
        
        day += (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        while(--month > 0) {
            day += days[month-1];
        }
        return day;
    }
};