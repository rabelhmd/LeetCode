class Solution {
public:
    double champagneTower(int poured, int r, int g) {
        double ret[101][101] = {0.0};
        ret[0][0] = poured;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j <= i; j++) {
                if (ret[i][j] >= 1) {
                    ret[i + 1][j] += (ret[i][j] - 1) / 2.0;
                    ret[i + 1][j + 1] += (ret[i][j] - 1) / 2.0;
                    ret[i][j] = 1;
                }
            }
        }
        return ret[r][g];
    }
};