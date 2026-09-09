class Solution {
public:
    int maxDistinct(string s) {
        set<char>uni(s.begin(), s.end());
        return uni.size();
    }
};