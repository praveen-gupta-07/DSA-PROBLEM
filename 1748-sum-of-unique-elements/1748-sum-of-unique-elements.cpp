class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        int sum = 0;
        for(auto x : freq) {
            if(x.second == 1) {
                sum += x.first;
            }
        }
        return sum;
    }
};