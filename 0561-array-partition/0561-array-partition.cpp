class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,sum=0;
        int j=1;
        while(j<nums.size()){
            sum = sum+min(nums[i],nums[j]);
            i=i+2;
            j=j+2;
        }
        return sum;
    }
};