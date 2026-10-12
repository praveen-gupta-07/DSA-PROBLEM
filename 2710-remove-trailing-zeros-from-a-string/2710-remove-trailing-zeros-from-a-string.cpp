class Solution {
public:
    string removeTrailingZeros(string num) {
        bool check = false;
        for(int i = num.size()-1;i>=0;i--){
            if(check==true){
                break;
            }
            if(num[i]=='0'){
                num.erase(num.begin() + i, num.end());
            }else{
                check=true;
            }
        }
        return num;
    }
};