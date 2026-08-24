class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        int n = nums.size();
        vector<int> temp;
        int j = 0;

        while(j < n) {

            int freq = nums[j];
            int value = nums[j + 1];

            for(int i = 0; i < freq; i++) {
                temp.push_back(value);
            }

            j = j + 2;
        }

        return temp;
    }
};