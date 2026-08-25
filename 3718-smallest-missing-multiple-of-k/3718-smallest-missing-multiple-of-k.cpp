class Solution {
public:

    bool check(vector<int>& nums, int x) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == x) {
                return true;
            }
        }

        return false;
    }

    int missingMultiple(vector<int>& nums, int k) {

        for(int i = 1; i <= nums.size() + 1; i++) {
            int multiple = k * i;
            if(check(nums, multiple) == false) {
                return multiple;
            }
        }
        return -1;
    }
};