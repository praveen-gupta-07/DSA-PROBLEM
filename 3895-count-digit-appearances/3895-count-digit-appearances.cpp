class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
    int n = nums.size();
    int count =0;
    for(int i =0 ;i<n;i++){
        int nu=nums[i];
        int rem=0;
        while(nu>0){
            rem=nu%10; 
            if(rem==digit) {
                count++;
            }  
            nu=nu/10;
        }
    }
    return count;
}
};