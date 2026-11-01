class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        set<int>s;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                s.insert(matrix[i][j]);
            }
            if(s.size()!=matrix[i].size()){
                return false;
            }
            s.clear();
        }
        for(int j=0;j<matrix.size();j++){
            for(int i=0;i<matrix.size();i++){
                s.insert(matrix[i][j]);
            }
            if(s.size()!=matrix.size()){
                return false;
            }
            s.clear();
        }
        return true;
    }
};