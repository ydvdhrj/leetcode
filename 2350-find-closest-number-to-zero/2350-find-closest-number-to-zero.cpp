class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i])<abs(ans)) ans = nums[i];
            if(abs(nums[i])==abs(ans)){
                if(nums[i]>ans) ans=nums[i];
            }
        }
        return ans;
    }
};