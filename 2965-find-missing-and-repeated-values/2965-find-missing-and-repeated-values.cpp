class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int s = n * m;
        vector<int> temp(s + 1, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                temp[grid[i][j]]++;
            }
        }
        vector<int> ans(2);
        for(int i = 1; i < temp.size(); i++){
            if(temp[i] == 2){
                ans[0] = i;
            }
            if(temp[i] == 0){
                ans[1] = i;
            }
        }
        return ans;
    }
};