
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                int x = abs(nums[i]);
                if(x>max && find(nums.begin(), nums.end(), x) != nums.end()){
                    max=x;
                }
            }
        }
        if(max!=0){
            return max;
        }
        return -1;
    }
};
