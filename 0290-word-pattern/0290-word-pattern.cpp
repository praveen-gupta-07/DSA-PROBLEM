class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while(ss >> word) {
            words.push_back(word);
        }

        if(words.size() != pattern.size())
            return false;
        unordered_map<char,string> mp;
        unordered_map<string,char> rev;
        for(int i = 0; i < pattern.size(); i++) {

            if(mp.count(pattern[i])) {
                if(mp[pattern[i]] != words[i])
                    return false;
            }
            else {
                mp[pattern[i]] = words[i];
            }
            if(rev.count(words[i])) {
                if(rev[words[i]] != pattern[i])
                    return false;
            }
            else {
                rev[words[i]] = pattern[i];
            }
        }

        return true;
    }
};