class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp ;
        temp = heights;
        sort(heights.begin(),heights.end());
        int n = heights.size();
        int count =0;
        for(int i =0;i<n;i++){
            if(temp[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};