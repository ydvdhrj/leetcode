class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = size(nums);
        vector<vector<int>> result;
        for(int i=0;i<(1<<n);i++){
            vector<int> a;

            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    a.push_back(nums[j]);
                }
            }
            result.push_back(a);
        }
        return result;
    }
};