class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        // int ans;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
                // ans=i;
            }
            if(target<nums[i]){
                return i;
                // ans=i;
            }
        }
        return n;
        
    }
};