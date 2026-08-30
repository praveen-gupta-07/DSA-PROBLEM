class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        set<int>unique;
        set<int>present;
        unique.insert(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                if (unique.find(nums[i]) != unique.end()) {
                    present.insert(nums[i]);
                }
            }
            unique.insert(nums[i]);
        }
        return unique.size() - present.size();
    }
};