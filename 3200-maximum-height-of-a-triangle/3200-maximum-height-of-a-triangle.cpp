class Solution {
public:
    int f(int r, int b) {
        int ret = 0, pos = 1;
        while(true) {
            if(pos & 1) {
                if(r >= pos) r -= pos;
                else break;
            } else {
                if(b >= pos) b -= pos;
                else break;
            }
            ret += 1, pos += 1;
        }
        return ret;
    }
    
    int maxHeightOfTriangle(int red, int blue) {
        int rb = f(red, blue), br = f(blue, red);
        return max(rb, br);
    }
};