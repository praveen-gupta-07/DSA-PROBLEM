class Solution {
public:
    bool isPowerOfFour(int n) {
         if(n <= 0) {
            return false;
        }
        while(n > 1) {
            double decicheck = (double)n / 4;
            int intcheck = n / 4;
            double ans = decicheck - intcheck;
            if(ans != 0) {
                return false;
            }
            n = n / 4;
        }
        return true;  
    }
};
