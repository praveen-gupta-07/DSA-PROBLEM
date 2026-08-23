class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int arr[3] = {0};
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            ++arr[nums[i]];
        }

   
        int index = 0;

        for(int i = 0; i < arr[0]; i++) {
            nums[index] = 0;
            index++;
        }

        for(int i = 0; i < arr[1]; i++) {
            nums[index] = 1;
            index++;
        }

    
        for(int i = 0; i < arr[2]; i++) {
            nums[index] = 2;
            index++;
        }
    }
};