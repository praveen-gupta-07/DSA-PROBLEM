class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp = nums;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int first;
        int sec;
        while(i < j) {
            if(nums[i] + nums[j] == target) {
                first = nums[i];
                sec = nums[j];
                break;
            }
            else if(nums[i] + nums[j] > target) {
                j--;
            }
            else {
                i++;
            }
        }

        for(int i = 0; i < temp.size(); i++) {
            if(first == temp[i]) {
                ans.push_back(i);
                break;
            }
        }
        for(int i = temp.size() - 1; i >= 0; i--) {
            if(sec == temp[i]) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};