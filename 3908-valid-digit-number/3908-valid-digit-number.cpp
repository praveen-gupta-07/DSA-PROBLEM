class Solution {
public:
    bool validDigit(int n, int x) {
        unordered_map<int,int>mp;
        int check = 0;
        while(n != 0){
            int rem = n % 10;
            mp[rem]++;
            n = n / 10;
            check = rem;
        }
        if(check == x){
            return false;
        }
        if(mp[x] == 0){
            return false;
        }
        return true;
    }
};
