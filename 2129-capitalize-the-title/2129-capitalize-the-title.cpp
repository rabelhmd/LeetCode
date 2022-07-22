class Solution {
public:
    
    void cap(string& w) {
        for(auto &c: w) c = tolower(c);
        if(w.size() <= 2) return;
        w[0] = toupper(w[0]);
    }
    
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string w, str;
        while(ss >> w) {
            cap(w);
            str += w;
            str += " ";
        }
        
        if(str != "") str.pop_back();
        return str;
    }
};