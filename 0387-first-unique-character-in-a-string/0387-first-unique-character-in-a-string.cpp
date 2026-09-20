class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> ans;
        for(char ch : s){
            ans[ch]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(ans[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
