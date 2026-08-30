class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> temp(10, 0);
        while (n != 0) {
            int rem = n % 10;
            temp[rem]++;
            n = n / 10;
        }
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            if (temp[i] > 0) {
                sum += i * temp[i];
            }
        }
        return sum;
    }
};