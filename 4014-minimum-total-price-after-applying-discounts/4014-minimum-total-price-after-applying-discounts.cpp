class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int d = discounts.size();
        int p = prices.size();
        if(d > p){
            int sub = d - p;
            for(int i = 0; i < sub; i++){
                prices.insert(prices.begin(), 0);
            }
        }
        else if(p > d){
            int sub = p - d;
            for(int i = 0; i < sub; i++){
                discounts.insert(discounts.begin(), 0);
            }
        }
        double sum = 0.0;
        for(int i = prices.size() - 1; i >= 0; i--){
            int price = prices[i];
            int discount = discounts[i];
            sum = sum + (price * (100 - discount)) / 100.0;
        }
        return sum;
    }
};