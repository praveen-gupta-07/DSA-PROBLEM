class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>temp;
        temp.push_back(0);
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            temp.push_back(sum);
        }
        return *max_element(temp.begin(),temp.end());
    }
};