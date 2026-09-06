class Solution {
public:
    int firstMatchingIndex(string s) {
        int i = 0;
        int j = s.size();
        while (i < j) {
            if (s[i] == s[j - i - 1]) {
                return i;
            }
            i++;
        }
        return -1;
    }
};