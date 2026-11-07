class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int i = 0;
        int count = 0;
        int give = 1;

        while(count < candies){
            int temp = min(give, candies - count);
            ans[i] += temp;
            count += temp;
            give++;
            i++;
            if(i == num_people){
                i = 0;
            }
        }

        return ans;
    }
};