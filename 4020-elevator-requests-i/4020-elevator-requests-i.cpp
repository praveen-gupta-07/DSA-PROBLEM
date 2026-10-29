class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int f= 0;
        int res = 0;

        for (int i = 0; i < requests.size(); i++) {
            res += abs(f- requests[i]);
            f= requests[i];
        }
        return res;
    }
};