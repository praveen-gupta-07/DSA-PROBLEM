class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int m =0;m<arr.size();m++){
            if(arr[m]%2!=0){
                count++;
            }else{
                count=0;
            }
            if(count==3){
                return true;
            }
        }
        return false;
    }
};