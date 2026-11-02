class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int j=0;j<s.size();j++){
            if(s[j]!='i'){
                ans+=s[j];
            }else{
                reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};