class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int pro1=(nums[0]*nums[1]);
        int pro2=(nums[n-1] * nums[n-2]);
        int ans = pro2-pro1;
        return ans;
    }
};