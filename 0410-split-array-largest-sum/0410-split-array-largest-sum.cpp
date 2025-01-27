class Solution {
public:
    int partition(vector<int>& nums,int maxsum, int n){
        int sum=0,count=1;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=maxsum){
                sum+=nums[i];
            }
            else{
                count++;
                sum=nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0;
        for(auto i:nums){
            r+=i;
            l=max(l,i);
        }
        while(l<=r){
            int m = (l+r)/2;
            if(partition(nums,m,n)>k){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return l;
    }
};