class Solution {
public:

    int leftSide(string boxes, int target) {
        int sum = 0;

        for(int i = 0; i < target; i++) {
            if(boxes[i] == '1') {
                sum += target - i;
            }
        }

        return sum;
    }

    int rightSide(string boxes, int target) {
        int sum = 0;

        for(int i = target + 1; i < boxes.size(); i++) {
            if(boxes[i] == '1') {
                sum += i - target;
            }
        }

        return sum;
    }

    vector<int> minOperations(string boxes) {
        vector<int> ans;

        for(int i = 0; i < boxes.size(); i++) {

            int left = leftSide(boxes, i);
            int right = rightSide(boxes, i);

            ans.push_back(left + right);
        }

        return ans;
    }
};