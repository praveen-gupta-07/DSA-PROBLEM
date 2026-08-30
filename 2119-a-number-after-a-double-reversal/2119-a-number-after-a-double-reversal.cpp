class Solution {
public:
    bool isSameAfterReversals(int num) {
        int ans = num % 10;
        if(num==0){
            return true;
        }
        if(ans ==0){
            return false;
        }
        return true;
    }
};