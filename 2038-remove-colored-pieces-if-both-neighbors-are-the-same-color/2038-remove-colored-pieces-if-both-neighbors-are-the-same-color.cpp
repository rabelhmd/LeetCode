class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0, bob = 0, countAlice = 0, countBob = 0;
        for (auto &x: colors) {
            if (x == 'A') {
                if (countAlice++ >= 2) alice += 1;
                countBob = 0;
            } else {
                if (countBob++ >= 2) bob += 1;
                countAlice = 0;
            }
        }
        return alice > bob;
    }
};
