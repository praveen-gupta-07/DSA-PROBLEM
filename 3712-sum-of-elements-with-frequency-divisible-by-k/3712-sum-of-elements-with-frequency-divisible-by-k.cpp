class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int res=0;
        for(auto it: mp){
            if(it.second %k==0){
                res+=(it.first * it.second);
            }
        }
        return res;
    }
};