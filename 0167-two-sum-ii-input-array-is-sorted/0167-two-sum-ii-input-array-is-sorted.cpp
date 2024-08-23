class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        vector<int> ans;
        while(l<=r){
            if(nums[l]==target-nums[r]){
                ans.push_back(l+1);
                ans.push_back(r+1);
                break;
            }
            else if(nums[l]<target-nums[r]){
                l++;
            }
            else if(nums[l]>target-nums[r]){
                r--;
            }
        }
        return ans;
    }
};