class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m]==target) return m;
            else if(target<nums[m]){
                r=m-1;
            }
            else l=m+1;
        }
        return -1;
    }
};