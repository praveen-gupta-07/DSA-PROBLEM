class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        if(skill.size()==2){
            return 1LL * skill[0] * skill[1];
        }
        vector<int>temp;
        int j=skill.size()-1;
        for(int i=0;i<skill.size()/2;i++){
            temp.push_back(skill[i]);
            temp.push_back(skill[j]);
            j--;
        }
        int x=temp[0]+temp[1];
        for(int i=2;i<temp.size();i=i+2){
            int y=temp[i]+temp[i+1];
            if(x!=y){
                return -1;
            }
        }
        long long res=0;
        for(int i=0;i<temp.size();i=i+2){
            res+=(1LL*temp[i]*temp[i+1]);
        }
        return res;
    }
};