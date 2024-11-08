class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int> ans(n);
        int maxi = pow(2,maximumBit)-1;
        int x=0;
        for(int i=0;i<n;i++){
            x^=nums[i];
            ans[n-i-1] = maxi - x;
        }
        
        return ans;
    }
};