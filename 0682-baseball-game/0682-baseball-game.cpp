class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> bb;
        for(int i = 0; i < operations.size(); i++) {
            string ch = operations[i];
            if(ch == "C") {
                bb.pop();
            }
            else if(ch == "D") {
                int num = 2 * bb.top();
                bb.push(num);
            }
            else if(ch == "+") {
                int a = bb.top();
                bb.pop();
                int b = bb.top();
                bb.push(a);
                bb.push(a + b);
            }
            else {
                bb.push(stoi(ch));
            }
        }
        int ans = 0;
        while(!bb.empty()) {
            ans += bb.top();
            bb.pop();
        }
        return ans;
    }
};