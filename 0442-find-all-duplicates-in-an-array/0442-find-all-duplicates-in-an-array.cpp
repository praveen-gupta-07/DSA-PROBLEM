class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int, int> temp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            temp[nums[i]]++;

            if(temp[nums[i]] == 2) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};