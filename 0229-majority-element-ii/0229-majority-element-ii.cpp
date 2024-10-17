class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i:nums){
            m[i]++;
        }
        for(auto it:m){
            if(it.second>nums.size()/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};