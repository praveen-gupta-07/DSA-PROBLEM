class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        unordered_map<char, int> freq;
        for(int i = 0; i < jewels.size(); i++) {
            freq[jewels[i]]++;
        }
        for(int i = 0; i < stones.size(); i++) {
            if(freq.find(stones[i]) != freq.end()) {
                ans++;
            }
        }
        return ans;
    }
};