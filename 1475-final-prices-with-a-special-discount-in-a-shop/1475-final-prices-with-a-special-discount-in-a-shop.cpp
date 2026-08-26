class Solution {
public:

    int findDiscount(vector<int>& prices, int i) {
        for(int j = i + 1; j < prices.size(); j++) {
            if(prices[j] <= prices[i]) {
                return prices[j];
            }
        }
        return 0;
    }

    vector<int> finalPrices(vector<int>& prices) {
        for(int i = 0; i < prices.size(); i++) {
            int discount = findDiscount(prices, i);
            prices[i] = prices[i] - discount;
        }
        return prices;
    }
};