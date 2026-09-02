class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> temp;
        int sum = (n - 1) * n / 2;
        for (int i = 0; i < n - 1; i++) {
            temp.push_back(i + 1);
        }
        temp.push_back(-sum);
        return temp;
    }
};