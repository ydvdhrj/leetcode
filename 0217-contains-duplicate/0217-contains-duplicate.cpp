class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      int n = nums.size();
      bool cnt = false;
      sort(nums.begin(),nums.end());
      for(int i=1;i<n;i++){
          if(nums[i]==nums[i-1]){
              cnt = true;
          }
      } 
      return cnt;
    }
};