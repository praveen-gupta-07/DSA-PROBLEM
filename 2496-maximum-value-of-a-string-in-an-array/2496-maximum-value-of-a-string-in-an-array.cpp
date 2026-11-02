class Solution {
public:
    int maximumValue(vector<string>& strs) {
        vector<int> res;
        for(int i = 0; i < strs.size(); i++) {
            bool check = false;
            for(int j = 0; j < strs[i].size(); j++) {
                if(isalpha(strs[i][j])) {
                    check = true;
                    break;
                }
            }
            if(check) {
                res.push_back(strs[i].size());
            } 
            else {
                res.push_back(stoi(strs[i]));
            }
        }
        return *max_element(res.begin(), res.end());
    }
};