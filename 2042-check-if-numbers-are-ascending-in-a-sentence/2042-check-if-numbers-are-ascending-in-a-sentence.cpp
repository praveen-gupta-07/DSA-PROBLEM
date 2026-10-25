class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>temp;
        vector<string>con;
        string t="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                t+=s[i];
            }else{
                con.push_back(t);
                t="";
            }
        }
        con.push_back(t);
        for(int i =0;i<con.size();i++){
            string x = con[i];
            if(!x.empty() && x.find_first_not_of("0123456789") == string::npos) {
                temp.push_back(stoi(x));
            }
        }
        for(int i =0;i<temp.size()-1;i++){
            if(temp[i]>=temp[i+1]){
                return false;
            }
        }
        return true;
    }
};