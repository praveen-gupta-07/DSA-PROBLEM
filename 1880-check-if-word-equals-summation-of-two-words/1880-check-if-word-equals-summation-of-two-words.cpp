class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string sum1 = "";
        string sum2 = "";
        string res = "";
        for(int i = 0; i < firstWord.size(); i++) {
            sum1.push_back(firstWord[i] - 'a' + '0');
        }
        for(int i = 0; i < secondWord.size(); i++) {
            sum2.push_back(secondWord[i] - 'a' + '0');
        }
        for(int i = 0; i < targetWord.size(); i++) {
            res.push_back(targetWord[i] - 'a' + '0');
        }
        return stoll(sum1) + stoll(sum2) == stoll(res);
    }
};