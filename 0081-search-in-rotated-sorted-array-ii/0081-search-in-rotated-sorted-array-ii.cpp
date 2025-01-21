class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target) return true;
            if(nums[l]==nums[m] && nums[m]==nums[r]){
                l++;
                r--;
                continue;
            }

            if(nums[m]>=nums[l]){
                if(target>=nums[l] && target<=nums[m]){
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            else{
                if(target>=nums[m] && target<=nums[r]) l=m+1;
                else r=m-1;
            }

        }
        
        return false;
    }
};