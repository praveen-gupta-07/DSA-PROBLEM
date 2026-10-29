class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> temp;
        int odd = 0;
        int even = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] % 2 != 0) 
                        odd++;
                }
                temp.push_back(odd);
                odd = 0;
            } else {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[j] % 2 == 0)
                        even++;
                }
                temp.push_back(even);
                even = 0;
            }
        }

        return temp;
    }
};