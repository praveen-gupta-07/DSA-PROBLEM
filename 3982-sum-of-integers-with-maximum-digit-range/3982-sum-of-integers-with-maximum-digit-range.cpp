class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int>digit;

        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            vector<int>temp;

            while(x!=0){
                int rem=x%10;
                temp.push_back(rem);
                x=x/10;
            }

            int m=*min_element(temp.begin(),temp.end());
            int n=*max_element(temp.begin(),temp.end());

            digit.push_back(n-m);
        }
        int maxi=*max_element(digit.begin(),digit.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(digit[i]==maxi){
                ans+=nums[i];
            }
        }
        return ans;
    }
};