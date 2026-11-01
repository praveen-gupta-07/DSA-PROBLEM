class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<10){
                res+=nums[i];
            }else{
                int x = nums[i];
                string check = to_string(x);
                char m = *max_element(check.begin(),check.end());
                for(int j=0;j<check.size();j++){
                    check[j]=m;
                }
                res+=stoi(check);
            }
        }
        return res;
    }
};