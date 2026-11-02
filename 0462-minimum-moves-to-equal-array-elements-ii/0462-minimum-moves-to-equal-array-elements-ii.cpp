class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()/2;
        int x = nums[n];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=(abs(nums[i]-x));
        }
        return sum;
    }
};