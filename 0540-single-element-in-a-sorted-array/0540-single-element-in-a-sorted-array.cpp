class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        if(nums.size()==1) return nums[0];
        while(l<=r){
            int m = l+(r-l)/2;
            if(m==0 && nums[m]!=nums[m+1]) return nums[m];
            if(m==n-1 && nums[m]!=nums[m-1]) return nums[m];
            if(m>0 && m<n-1 && nums[m]!=nums[m-1] && nums[m]!=nums[m+1]) return nums[m];

            else{
                if(m%2==0){
                    if(nums[m-1]==nums[m]) r=m-1;
                    else l=m+1;
                }
                else{
                    if(nums[m-1]==nums[m]) l=m+1;
                    else r=m-1; 
                }
            }
        }
        return 0;

    }
};