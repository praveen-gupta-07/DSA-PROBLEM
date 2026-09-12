class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) {
            return false;
        }
        while(n > 1) {
            double decicheck = (double)n / 3;
            int intcheck = n / 3;
            double ans = decicheck - intcheck;
            if(ans != 0) {
                return false;
            }
            n = n / 3;
        }
        return true;
    }
};