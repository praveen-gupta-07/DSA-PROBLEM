class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        set<int> temp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(temp.insert(nums[i]).second){
                ans.push_back(nums[i]);
            }
            if(ans.size() == k){
                break;
            }
        }
        return ans;
    }
};