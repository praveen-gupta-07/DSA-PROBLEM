class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int left=0;
        int check=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i];
            check=abs(left-(total-left));
            if(check%2==0){
                count++;
                check=0;
            }
        }
        return count;
    }
};