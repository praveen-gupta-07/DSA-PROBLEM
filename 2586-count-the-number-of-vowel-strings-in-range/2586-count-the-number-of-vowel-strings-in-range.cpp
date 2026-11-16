class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i= left;i<=right;i++){
            int n = words[i].size();
            char l=words[i][0];
            char r=words[i][n-1];
            if((l=='a' || l=='e'|| l=='i' || l=='o'|| l=='u') && (r=='a' || r=='e'|| r=='i' || r=='o'|| r=='u')){
                count++;
            }
        }
        return count;
    }
};