class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int count = 0;
            int sum = 0;
            for (int j = 1; j * j <= num; j++) {
                if (num % j == 0) {
                    count++;
                    sum += j;
                    if (j != num / j) {
                        count++;
                        sum += num / j;
                    }
                }
                if (count > 4) {
                    break;
                }
            }
            if (count == 4) {
                ans += sum;
            }
        }
        return ans;
    }
};