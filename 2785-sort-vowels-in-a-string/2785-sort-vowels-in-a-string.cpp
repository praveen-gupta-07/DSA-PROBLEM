class Solution {
public:
    string sortVowels(string s) {
        string ans = "";

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if(
                ch == 'a' || ch == 'A' ||
                ch == 'e' || ch == 'E' || 
                ch == 'i' || ch == 'I' ||
                ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U' 
            ) {
                ans += ch;
            }
        }

        sort(ans.begin(), ans.end());

        int j = 0;

        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if(
                ch == 'a' || ch == 'A' ||
                ch == 'e' || ch == 'E' || 
                ch == 'i' || ch == 'I' ||
                ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U' 
            ) {
                s[i] = ans[j];
                j++;
            }
        }

        return s;
    }
};
