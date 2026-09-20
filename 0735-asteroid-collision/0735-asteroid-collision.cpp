class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ans;
        for(int i = 0; i < asteroids.size(); i++){
            int num = asteroids[i];
            if(num > 0){
                ans.push(num);
            }
            else{
                while(!ans.empty() && ans.top() > 0 && ans.top() < abs(num)){
                    ans.pop();
                }
                if(ans.empty() || ans.top() < 0){
                    ans.push(num);
                }
                else if(ans.top() == abs(num)){
                    ans.pop();
                }
            }
        }
        vector<int> result(ans.size());
        for(int i = ans.size()-1; i >= 0; i--){
            result[i] = ans.top();
            ans.pop();
        }
        return result;
    }
};