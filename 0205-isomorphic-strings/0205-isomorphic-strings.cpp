class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.size()!=t.size()){
        return false;
       }
        unordered_map<char,char>org;
        unordered_map<char,char>rev;
        for(int i=0 ;i<s.size();i++){
            if(org.find(s[i]) != org.end()) {
                if(org[s[i]] != t[i])
                    return false;
                }
            else{
                org[s[i]] = t[i];
            }
            if(rev.find(t[i]) != rev.end()) {
                if(rev[t[i]] != s[i])
                    return false;
                }
            else{
                rev[t[i]] = s[i];
            }
        }
        return true;
    }
};