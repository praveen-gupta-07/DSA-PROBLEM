class Solution {
public:
    string reverseWords(string s) {
        string rev="";
        string ans="";
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch==' '){
                reverse(rev.begin(),rev.end());
                ans += rev + " ";
                rev="";
            }else{
                rev+=s[i];
            }
        }
        reverse(rev.begin(),rev.end());
        ans += rev;
        return ans;
    }
};