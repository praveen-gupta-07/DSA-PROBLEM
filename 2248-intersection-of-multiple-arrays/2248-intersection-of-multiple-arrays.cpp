class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[nums[i][j]]++;
            }
        }
        set<int>s;
        for(auto it:mp){
            if(it.second==nums.size()){
                s.insert(it.first);
            }
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};