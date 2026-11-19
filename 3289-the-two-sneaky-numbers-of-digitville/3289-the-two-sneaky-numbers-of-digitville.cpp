class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int x=0;
        int y=0;
        int count=0;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second==2){
                if(count==0){
                    x=it.first;
                    count++;
                }else{
                    y=it.first;
                }
            }
        }
        return {x,y};
    }
};
