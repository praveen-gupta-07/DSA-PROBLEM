class Solution {
public:
    int even(int n){
        return n / 2;
    }
    int odd(int n){
        return n - 1;
    }
    int numberOfSteps(int num) {
        int count = 0;
        while(num != 0){
            if(num % 2 == 0){
                num = even(num);
                count++;
            }else{
                num = odd(num);
                count++;
            }
        }
        return count;
    }
};