class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.size();i++){
            if(isalpha(command[i])){
                ans+=command[i];
            }else{
                if(command[i]=='(' && command[i+1]==')'){
                    ans+='o';
                    i++;
                }
            }
        }
        return ans;
    }
};