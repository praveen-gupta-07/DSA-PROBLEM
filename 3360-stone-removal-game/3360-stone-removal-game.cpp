class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }
        for (int i = 10; i > 0; i--) {
            n = n - i;
            if (n < 0) {
                return false;
            }
            if (n < i - 1) {
                return true;
            }
            n = n - (i - 1);
            if (n < 0) {
                return true;
            }
            i--;
        }
        return true;
    }
};