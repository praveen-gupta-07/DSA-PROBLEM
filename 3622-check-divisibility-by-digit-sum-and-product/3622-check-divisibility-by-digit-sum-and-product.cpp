class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;
        int sum = 0, rem = 0;
        long long mul = 1;

        while(x != 0) {
            rem = x % 10;
            sum += rem;
            mul = mul * rem;
            x = x / 10;
        }

        if(n % (sum + mul) == 0) {
            return true;
        }
        return false;
    }
};