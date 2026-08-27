class Solution {
public:
    int check(int nu) {
        int rem = 0;
        int sum = 0;
        while (nu > 0) {
            rem = nu % 10;
            sum = sum + (rem * rem);
            nu = nu / 10;
        }
        if (sum == 1) {
            return true;
        }
        if (sum == 4) {
            return false;
        }
        return check(sum);
    }

    bool isHappy(int n) {
        return check(n);
    }
};