class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int Lsum=0;
        int Rsum=0;
        for(int i=0;i<nums1.size();i++){
            Lsum+=nums1[i];
            Rsum+=nums2[i];
        }
        bool neg=false;
        if(Lsum>Rsum){
            neg=true;
        }
        int diff=abs(Lsum-Rsum);
        int x=diff/nums1.size();
        if(neg==false){
            return x;
        }
        return -x;
    }
};