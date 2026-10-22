class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];
            int pos = t.find(ch);

            if(pos != string::npos) {
                t.erase(pos, 1);
            } else {
                count++;
            }
        }
        return count;
    }
};