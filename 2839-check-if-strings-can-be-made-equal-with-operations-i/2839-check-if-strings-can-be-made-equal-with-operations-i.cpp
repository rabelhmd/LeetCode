class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string t1 = s1, t2 = s1, t3 = s1;
        swap(t1[0], t1[2]);
        swap(t2[1], t2[3]);
        swap(t3[0], t3[2]);
        swap(t3[1], t3[3]);
        return s1 == s2 || (t1 == s2 || t2 == s2 || t3 == s2);
    }
};