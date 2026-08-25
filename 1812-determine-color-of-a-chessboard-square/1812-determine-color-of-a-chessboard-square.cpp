class Solution {
public:

    bool alphabet(char ch) {
        int value = ch - 'a' + 1;
        if(value % 2 == 1) {
            return true;
        }
        return false;
    }
    bool number(char ch) {
        int value = ch - '0';
        if(value % 2 == 1) {
            return true;
        }
        return false;
    }

    bool squareIsWhite(string coordinates) {

        bool a = alphabet(coordinates[0]);
        bool b = number(coordinates[1]);

        if(a == b) {
            return false;
        }
        return true;
    }
};