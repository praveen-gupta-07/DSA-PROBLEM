class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans = nums;
        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int rev = 0;
            while(x != 0) {
                int rem = x % 10;
                rev = rev * 10 + rem;
                x = x / 10;
            }
            ans.push_back(rev);
        }
        set<int> st;
        for(int i = 0; i < ans.size(); i++) {
            st.insert(ans[i]);
        }
        return st.size();
    }
};