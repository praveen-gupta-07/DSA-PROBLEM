class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> temp;

        for(int i = 0; i < nums.size(); i++) {
            temp[nums[i]]++;
        }

        vector<pair<int, int>> arr;

        for(auto x : temp) {
            arr.push_back({x.first, x.second});
        }

        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};