class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<float>temp;
        float ans;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            ans=(nums[i]+nums[j])/2.0;
            temp.push_back(ans);
            i++;
            j--;
        }
        float res= *min_element(temp.begin(),temp.end());
        return res;
    }
};