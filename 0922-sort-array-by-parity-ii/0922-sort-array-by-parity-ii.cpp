class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            if(nums[i]%2==0){
                temp1.push_back(nums[i]);
            }else{
                temp2.push_back(nums[i]);
            }
        }
        for(int i=0;i<temp1.size();i++){
            ans.push_back(temp1[i]);
            ans.push_back(temp2[i]);
        } 
        return ans;
    }
};