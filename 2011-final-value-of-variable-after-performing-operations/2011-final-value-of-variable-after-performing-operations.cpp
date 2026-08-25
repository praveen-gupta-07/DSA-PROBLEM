class Solution {
public:

    int check(string s) {
        if(s[0] == '+') {
            return 1;
        }
        else if(s[0] == '-') {
            return -1;
        }
        else if(s[1] == '+') {
            return 1;
        }
        else {
            return -1;
        }
    }

    int finalValueAfterOperations(vector<string>& operations) {

        int x = 0;

        for(int i = 0; i < operations.size(); i++) {
            x += check(operations[i]);
        }

        return x;
    }
};