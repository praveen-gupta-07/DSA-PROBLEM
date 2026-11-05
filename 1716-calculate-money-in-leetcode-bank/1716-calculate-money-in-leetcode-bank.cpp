class Solution {
public:
    int totalMoney(int n) {
        int st = 1;
        int it = 1;
        int count = 1;
        int sum = 0;
        while(st <= n) {
            sum += count;
            count++;
            st++;
            if((st - 1) % 7 == 0) {
                it++;
                count = it;
            }
        }
        return sum;
    }
};