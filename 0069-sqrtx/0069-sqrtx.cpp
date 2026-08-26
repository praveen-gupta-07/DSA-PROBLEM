class Solution {
public:
    int mySqrt(int x) {
    int count = 0;
    int odd = 1;

    while(x >= odd) {
        x = x - odd;
        odd = odd + 2;
        count++;
    }

    return count;
    }
};