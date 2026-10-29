class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int x = nums[n / 2];
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == x) {
                count++;
            }
        }
        if (count > 1) {
            return false;
        }
        return true;
    }
};