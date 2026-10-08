class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int count =0;
        for(int i =0;i<s.size();i++){
            char ch =s[i];
            if(ch==' '){
                count++;
                if(count==k){
                    break;
                }
                ans= ans+" ";
            }else{
                ans +=s[i];
            }
        }
        return ans;
    }
};