class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
    int ans = -1;
    unordered_map<int, int> freq;
    for(int x : nums){
        freq[x]++;
    }
    for(auto x : freq) {
        if(x.second > 1) {
            ans = x.first;
            break;
        }
    }
    return ans;   
    }
};