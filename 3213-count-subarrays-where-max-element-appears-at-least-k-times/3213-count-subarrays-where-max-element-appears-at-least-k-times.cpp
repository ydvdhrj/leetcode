class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans =0;
        int maxEle = INT_MIN;
        int count=0;
        for(int i:nums){
            maxEle = max(maxEle,i);
        }
        for(int i:nums){
            if(i==maxEle) count++;
        }
        if(count<k) return ans;
        
        int l=0,r=0;
        int c=0;
        while(l<=r && r<n){
            
                if(nums[r]==maxEle){
                    c++;
                }
                
            while(c>=k){
                if(nums[l]==maxEle){
                    c--;
                }
                l++;
                ans+=n-r;
                
            }
            r++;
        }
        return ans;

    }
};