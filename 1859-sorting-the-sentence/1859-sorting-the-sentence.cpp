
class Solution {
public:
    string sortSentence(string s) {
        vector<string> temp(200);
        string ans = "";

        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                int put = s[i] - '0';
                temp[put - 1] = ans;
                ans = "";
            } else if(s[i] == ' ') {
                continue;
            } else {
                ans += s[i];
            }
        }

        string res = "";
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i] != "") {
                if(res != "") {
                    res += " ";
                }
                res += temp[i];
            }
        }
        return res;
    }
};
