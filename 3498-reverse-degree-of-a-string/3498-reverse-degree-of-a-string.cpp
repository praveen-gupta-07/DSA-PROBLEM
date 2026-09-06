class Solution {
public:
    int reverseDegree(string s) {
        int value =0;
        int prod=0;
        int sum =0;
        for(int i =0;i<s.size();i++){
            char ch = s[i];
            int value = 'z' - ch + 1;
            int ind = i+1;
            prod=(value*ind);
            sum+=prod;
        }
        return sum;
    }
};