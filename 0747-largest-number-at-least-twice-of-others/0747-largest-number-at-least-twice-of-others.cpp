class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int indx;
        int x = *max_element(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x){
                indx = i;
                break;
            }
        }
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        if(nums.size() == 1){
            return 0;
        }
        if(nums[n] < nums[n-1] * 2){
            return -1;
        }
        return indx;
    }
};