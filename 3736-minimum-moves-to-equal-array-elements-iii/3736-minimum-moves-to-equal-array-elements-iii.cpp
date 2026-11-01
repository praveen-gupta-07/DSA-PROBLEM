class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int x= *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            sum+=(abs(nums[i]-x));
        }
        return sum;
    }
};