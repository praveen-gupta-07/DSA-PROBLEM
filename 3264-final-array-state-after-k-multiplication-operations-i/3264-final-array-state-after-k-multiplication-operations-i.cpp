class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0; i<k; i++){
            int x = *min_element(nums.begin(), nums.end());
            int idx = find(nums.begin(), nums.end(), x) - nums.begin();
            nums[idx] *= multiplier;
        }
        return nums;
    }
};