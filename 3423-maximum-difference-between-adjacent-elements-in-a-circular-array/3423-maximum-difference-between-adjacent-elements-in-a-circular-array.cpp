class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size()-1;i++){
            temp.push_back(abs(nums[i]-nums[i+1]));
        }
        temp.push_back(abs(nums[nums.size()-1]-nums[0]));
        return *max_element(temp.begin(),temp.end());
    }
};