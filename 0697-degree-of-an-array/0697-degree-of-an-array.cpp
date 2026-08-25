class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> temp(50001, 0);

        for(int i = 0; i < n; i++) {
            temp[nums[i]]++;
        }

        int degree = *max_element(temp.begin(), temp.end());

        int ans = n;

        for(int x = 0; x < 50001; x++) {

            if(temp[x] == degree) {

                int left = 0;
                int right = 0;

                for(int i = 0; i < n; i++) {
                    if(nums[i] == x) {
                        left = i;
                        break;
                    }
                }

                for(int i = n - 1; i >= 0; i--) {
                    if(nums[i] == x) {
                        right = i;
                        break;
                    }
                }

                ans = min(ans, right - left + 1);
            }
        }

        return ans;
    }
};