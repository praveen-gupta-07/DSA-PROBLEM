class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0,count=0,i=0;
        while(i < costs.size() && sum != coins){
            if(sum + costs[i] <= coins){
                count++;
                sum = sum + costs[i];
                i++;
            }else{
                return count;
            }
        }
        return count;
    }
};