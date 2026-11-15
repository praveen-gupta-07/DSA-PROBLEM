class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int remain=0;
        int pair=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            int check=it.second;
            pair += check/2;
            if(check%2!=0){
                remain++;
            }
        }
        return {pair,remain};
    }
};
