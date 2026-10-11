class Solution {
public:
    int minimumSum(int num) {
        string convert = to_string(num);
        sort(convert.begin(), convert.end());
        string l = "";
        string r = "";

        l += convert[0];
        l += convert[3];

        r += convert[1];
        r += convert[2];
        return stoi(l) + stoi(r);
    }
};
