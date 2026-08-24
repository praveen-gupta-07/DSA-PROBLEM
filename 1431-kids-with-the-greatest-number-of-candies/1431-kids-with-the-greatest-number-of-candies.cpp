class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n = candies.size();
        vector<bool> ans;
        int m=0;
        m = *max_element(candies.begin(),candies.end());
        for(int i = 0; i < n; i++) {
            if(candies[i] + extraCandies >= m) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};