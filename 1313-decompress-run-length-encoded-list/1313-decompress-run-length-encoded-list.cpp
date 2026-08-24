class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        int n = nums.size();
        vector<int> temp;
        int j = 0;

        while(j < n) {

            for(int i = 0; i < nums[j]; i++) {
                temp.push_back(nums[j + 1]);
            }

            j = j + 2;
        }

        return temp;
    }
};