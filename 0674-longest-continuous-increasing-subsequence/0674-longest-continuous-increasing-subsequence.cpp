class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        if(n == 0)
            return 0;
        int count = 1;
        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] < nums[i + 1])
            {
                count++;
            }
            else
            {
                temp.push_back(count);
                count = 1;
            }
        }
        temp.push_back(count);
        int ans = *max_element(temp.begin(), temp.end());
        return ans;
    }
};