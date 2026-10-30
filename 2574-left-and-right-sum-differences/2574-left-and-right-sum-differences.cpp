class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> lSum;
        vector<int> rSum;
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }
        int x = 0;
        for(int i = 0; i < nums.size(); i++){
            lSum.push_back(x);
            x += nums[i];
        }
        x = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            rSum.push_back(x);
            x += nums[i];
        }
        reverse(rSum.begin(), rSum.end());
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(abs(lSum[i] - rSum[i]));
        }
        return ans;
    }
};