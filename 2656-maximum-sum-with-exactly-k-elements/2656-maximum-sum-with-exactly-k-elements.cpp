class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x = *max_element(nums.begin(), nums.end());
        int count = 0;
        int sum = 0;
        while(count < k) {
            sum += x;
            x++;
            count++;
        }
        return sum;
    }
};