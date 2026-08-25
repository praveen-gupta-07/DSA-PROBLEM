class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> freq(50001, 0);
        vector<int> left(50001, -1);

        int degree = 0;

        for(int i = 0; i < n; i++) {

            freq[nums[i]]++;

            if(left[nums[i]] == -1) {
                left[nums[i]] = i;
            }

            degree = max(degree, freq[nums[i]]);
        }

        int ans = n;

  
        for(int i = 0; i < n; i++) {

            if(freq[nums[i]] == degree) {

                int right = i;
                int length = right - left[nums[i]] + 1;

                ans = min(ans, length);
            }
        }

        return ans;
    }
};