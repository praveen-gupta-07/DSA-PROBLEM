class Solution {
public:
    bool checkGoodInteger(int n) {
        int i = 0, j = 0;
        while (n != 0) {
            int rem = n % 10;
            i += rem;
            j += rem * rem;
            n /= 10;
        }
        return (j - i) >= 50;
    }
};