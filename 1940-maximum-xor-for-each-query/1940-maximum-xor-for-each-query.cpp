class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int maxi = pow(2,maximumBit)-1;
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
            ans.push_back(maxi-x);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};