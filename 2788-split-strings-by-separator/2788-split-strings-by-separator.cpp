class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>result;
        string w="";
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                char ch=words[i][j];
                if(ch==separator){
                    if(w!=""){
                        result.push_back(w);
                        w="";
                    }
                }else{
                    w+=ch;
                }
            }
            if(w!=""){
                result.push_back(w);
                w="";
            }
        }
        return result;
    }
};