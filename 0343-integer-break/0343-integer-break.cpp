class Solution {
public:
    int integerBreak(int n) {
        if(n<=2){
            return 1;
        }
        if(n==3){
         return 2;
        }
        int ans = 1;
        while(n>4){
            n = n - 3;
            ans = ans * 3;
        }
        if(n==4){
            ans = ans * 4;
        }
        else if(n==3){
            ans = ans * 3;
        }
        else if(n==2){
            ans = ans * 2;
        }
        return ans;
    }
};