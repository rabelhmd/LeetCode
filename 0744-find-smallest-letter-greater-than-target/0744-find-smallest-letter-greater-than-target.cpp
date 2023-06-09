class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ub = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        return letters[ub % letters.size()];
    }
};