class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int p=-1;
        // for(int i=0;i<nums.size();i++){
        //     if(target == nums[i]){
        //        p = i;
        //     }
            
        // }
        // return p;

        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int m = l+(r-l)/2;
            if(nums[m]>nums[r]) l=m+1;
            else r=m;
        }
        if(l==0){
            r=nums.size()-1;
        }
        else if(target>=nums[0] && target<=nums[l-1]){
            r=l-1;
            l=0;
        }else{
            r=nums.size()-1;
        }
        while(l<=r){
            int mid=l+(r-l)/2;
            if(target==nums[mid]) return mid;
            else if(target>nums[mid]) l=mid+1;
            else r=mid-1;
        }
        return -1;

    }
};