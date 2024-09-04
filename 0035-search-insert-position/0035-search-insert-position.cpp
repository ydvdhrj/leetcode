class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        // int ans;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target){
        //         return i;
        //         ans=i;
        //     }
        //     if(target<nums[i]){
        //         return i;
        //         ans=i;
        //     }
        // }
        // return ans;

        int l=0,r=n-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(target==nums[m]) return m;
            else if(target>nums[m]){
                if(m+1<n && target<nums[m+1] ) return m+1;
                else l=m+1;
            } 
            else {
                if(m-1>=0 && target>nums[m-1]) return m;
                else if(m==0) return m;
                else r=m-1;
            }
        }
        return n;
        
    }
};