
class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        for(int i =0;i<s.size();i++){
            if(!isdigit(s[i])){
                ans=ans+s[i];
            }else{
                int nu=s[i]-'0';
                char ch = s[i-1]+nu;
                ans=ans+ch;
            }
        }
        return ans;
    }
};
