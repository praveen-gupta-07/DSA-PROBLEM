class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> temp(101, 0);
        for(int i = 0; i < nums.size(); i++) {
            temp[nums[i]]++;
        }
        int x = *max_element(temp.begin(), temp.end());
        int sum = 0;
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i] == x) {
                sum += temp[i];
            }
        }
        return sum;
    }
};