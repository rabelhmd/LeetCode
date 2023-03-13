class Solution {
public:
    int dateToInt(string s_date) {
        int year = stoi(s_date.substr(0, 4));
        int month = stoi(s_date.substr(5, 2));
        int day = stoi(s_date.substr(8, 2));
        
        for(int y = 1971; y < year; y++) day += isLeap(y) ? 366 : 365;
        for(int m = 1; m < month; m++) day += daysInMonth(m, year);
        return day;
    }
    
    bool isLeap(int year) {
        return (year %4  == 0 && year % 100 != 0) || year % 400 == 0;
    }
    
    int daysInMonth(int m, int year) { 
        if(m == 2) return isLeap(year) ? 29 : 28;
        if(m == 4 || m == 6 || m == 9 || m == 11) return 30;
        return 31;
    }
    
    int daysBetweenDates(string date1, string date2) {
        return abs(dateToInt(date2) - dateToInt(date1));
    }
};
