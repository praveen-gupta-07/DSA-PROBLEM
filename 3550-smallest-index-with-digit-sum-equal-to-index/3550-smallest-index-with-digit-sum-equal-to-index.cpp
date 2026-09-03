class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            int nu = nums[i];
            int rem = 0;
            while (nu != 0) {
                rem = nu % 10;
                sum += rem;
                nu /= 10;  
            }
            if (sum == i) {
                return i;
            }
        }

        return -1;
    }
};