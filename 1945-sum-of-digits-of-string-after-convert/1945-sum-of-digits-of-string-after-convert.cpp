class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        string sec = "";
        for(int j = 0; j < s.size(); j++){
            sec += to_string(s[j] - 'a' + 1);
        }
        for(int i = 0; i < k; i++){
            sum = 0;
            for(int j = 0; j < sec.size(); j++){
                sum += sec[j] - '0';
            }
            sec = to_string(sum);
        }
        return sum;
    }
};