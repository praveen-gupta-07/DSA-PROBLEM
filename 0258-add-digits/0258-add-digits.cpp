class Solution {
public:
    int summ(int n){
        int sum =0;
        int rem ;
        while(n!=0){
            rem = n%10;
            sum+=rem;
            n=n/10;
        }
        if(sum>9){
            return summ(sum);
        }
        return sum;
    }
    int addDigits(int num) {
        if(num<9){
            return num;
        }
        return  summ(num);
    }
};