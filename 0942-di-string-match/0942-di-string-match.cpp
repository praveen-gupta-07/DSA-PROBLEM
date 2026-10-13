
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i = 0;
        int j = s.size();
        int n = j;
        vector<int> ans;
        for(int m = 0; m < n; m++) {
            if(s[m] == 'I') {
                ans.push_back(i);
                i++;
            } else {
                ans.push_back(j);
                j--;
            }
        }
        ans.push_back(i);
        return ans;
    }
};
