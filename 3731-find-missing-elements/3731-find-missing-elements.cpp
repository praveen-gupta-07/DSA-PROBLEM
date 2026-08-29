class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int l = *min_element(nums.begin(), nums.end());
        int r = *max_element(nums.begin(), nums.end());

        vector<bool> present(r - l + 1, false);
        for(int i = 0; i < nums.size(); i++) {
            int number = nums[i];

            int index = number - l;

            present[index] = true;
        }
        vector<int> ans;
        for(int i = l; i <= r; i++) {
            int index = i - l;
            if(present[index] == false) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};