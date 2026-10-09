class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int small=0;
        int larg=0;
        for(int i = nums.size()-k;i<nums.size();i++){
            larg+=nums[i];
        }
        for(int i = 0;i<k;i++){
            small+=nums[i];
        }
        return larg-small;
    }
};