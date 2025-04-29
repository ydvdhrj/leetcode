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
            while(c<=k && r<n){
                if(nums[r]==maxEle){
                    c++;
                }
                if(c==k){
                    ans+=n-r;
                    break;
                }
                r++;
            }
            while(c==k && l<=r){
                if(nums[l]==maxEle){
                    c--;
                    l++;
                    break;
                }
                else{
                    l++;
                }
                if(c==k){
                    ans+=n-r;
                }
                
            }
            r++;
        }
        return ans;

    }
};