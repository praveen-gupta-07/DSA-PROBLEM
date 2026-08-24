class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int n = accounts.size();
    int ans =0;
    vector<int>temp;
    for(int i = 0 ;i< n;i++){
        int sum =0;
        int m =accounts[i].size();
        for(int j =0;j<m;j++)
        {
            sum+=accounts[i][j];
        }
        temp.push_back(sum);
    }
    ans = *max_element(temp.begin(),temp.end());    
    return ans;
    }
};