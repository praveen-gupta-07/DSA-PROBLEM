class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int m = stones.size();
            if(stones[m-1]==stones[m-2]){
                stones.erase(stones.end()-2,stones.end());
            }
            else{
                int ans = stones[m-1]-stones[m-2];
                stones.erase(stones.end()-2,stones.end());
                stones.push_back(ans);
            }
        }
        if(stones.empty()){
            return 0;
        }
        return stones[0];
    }
};