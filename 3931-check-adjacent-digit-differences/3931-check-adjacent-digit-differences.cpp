class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int check;
        int x,y;
        for(int i = 0; i < s.size()-1; i++){
            x = s[i]-'0';
            y = s[i+1]-'0';
            check = abs(x-y);
            if(check > 2){
                return false;
            }
            check = 0;
        }
        return true;
    }
};
