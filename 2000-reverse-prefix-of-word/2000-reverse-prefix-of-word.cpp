class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        string ans = "";
        int count = 0;
        int check = 0;
        for(int i = 0; i < n; i++) {
            if(count == 0) {
                if(word[i] != ch) {
                    ans.insert(ans.begin(), word[i]);
                    check++;
                } else {
                    ans.insert(ans.begin(), word[i]);
                    count++;
                    check++;
                }
            } else {
                ans += word[i];
                check++;
            }
        }
        if(check == n && count == 0) {
            return word;
        }
        return ans;
    }
};