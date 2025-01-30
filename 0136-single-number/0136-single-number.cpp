class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int xsum=0;
       for(int i=0;i<nums.size();i++){
           xsum=xsum^nums[i];
       }
       return xsum;
    }
};