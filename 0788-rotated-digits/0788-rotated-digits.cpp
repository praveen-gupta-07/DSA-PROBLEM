class Solution {
public:
    int invalid(int x){
        if(x==3 || x==4 || x==7){
            return 1;
        }
        return 0;
    }
    int valid(int x){
        if(x==2 || x==5 || x==6 || x==9){
            return 1;
        }
        return 0;
    }
    int same(int x){
        if(x==0 || x==1 || x==8){
            return 1;
        }
        return 0;
    }

    int rotatedDigits(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            int temp=i;
            int check=0;
            int good=0;
            while(temp!=0){
                int rem = temp % 10;
                if(invalid(rem)){
                    check=1;
                    break;
                }
                else if(valid(rem)){
                    good=1;
                }
                temp = temp/10;
            }
            if(check==0 && good==1){
                ans++;
            }
        }
        return ans;
    }
};