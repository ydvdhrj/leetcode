class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==target){
                int i=m,j=m;
                if(m!=r){
                while(j<n-1 && nums[j+1]==nums[m]){
                    j++;
                }
                }
                if(m!=l){
                while(i>0 && nums[i-1]==nums[m]) i--;
                }
                return {i,j};
            }
            else if(nums[m]>target) r=m-1;
            else l=m+1;
        }
        return {-1,-1};
    }
};