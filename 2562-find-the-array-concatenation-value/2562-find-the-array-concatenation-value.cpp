class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        long long res = 0;
        while(i < j){
            string ans = to_string(nums[i]) + to_string(nums[j]);
            long long sum = stoll(ans);
            res = res + sum;
            i++;
            j--;
        }
        if(i == j)
            res += nums[i];
        return res;
    }
};