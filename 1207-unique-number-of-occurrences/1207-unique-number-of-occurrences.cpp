class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i = 0 ;i<arr.size();i++){
            freq[arr[i]]++;
        }
        unordered_set<int>check;
        for(auto it: freq){
            int x = it.second;
            if(check.find(x)!=check.end()){
                return false;
            }else{
                check.insert(x);
            }
        }
        return true;
    }
};