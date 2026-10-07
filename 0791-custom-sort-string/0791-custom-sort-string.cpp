class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        for(int i = 0; i < order.size(); i++) {
            char ch = order[i];
            int pos = s.find(ch);
            while(pos != string::npos) {
                ans += ch;
                s.erase(pos, 1);
                pos = s.find(ch);
            }
        }
        return ans + s;
    }
};