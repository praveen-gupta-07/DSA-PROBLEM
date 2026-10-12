class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> s;
        if(sentence.size()<26){
            return false;
        }
        for(int i =0;i<sentence.size();i++){
            s.insert(sentence[i]);
        }
        if(s.size()==26){
            return true;
        }
        return false;
    }
};
