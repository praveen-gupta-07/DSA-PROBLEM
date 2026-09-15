class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = word1.size();
        int w2 = word2.size();
        string ans = "";

        if(w1 > w2){
            int sub = w1 - w2;
            for(int i = 0; i < sub; i++){
                word2.push_back(' ');
            }
        }
        else if(w2 > w1){
            int sub = w2 - w1;
            for(int i = 0; i < sub; i++){
                word1.push_back(' ');
            }
        }

        for(int i = 0; i < word1.size(); i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        string result = "";
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != ' '){
                result += ans[i];
            }
        }
        return result;
    }
};