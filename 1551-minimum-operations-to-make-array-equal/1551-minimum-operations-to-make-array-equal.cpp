class Solution {
public:
    int minOperations(int n) {
        int op = 0;

        if(n % 2 != 0){
            for(int i = 1; i <= n; i = i + 2){
                op = op + (n - i) / 2;
            }
            op = op * 2;
        }
        else{
            for(int i = 1; i <= (2*n)-1; i = i + 2){
                op = op + abs(n - i);
            }
            op = op / 2;
        }

        return op;
    }
};