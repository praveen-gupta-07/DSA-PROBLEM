class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative=0;
        int positive=0;
        for (int i =0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]>0){
                positive++;
            }else if (nums[i]<0){
                negative++;
            }
        }
        if(negative%2!=0){
            return -1;
        }else if(negative%2==0){
            return 1;
        }
        else if (positive%2==0){
            return 1;
        }
        return 0;
    }
};