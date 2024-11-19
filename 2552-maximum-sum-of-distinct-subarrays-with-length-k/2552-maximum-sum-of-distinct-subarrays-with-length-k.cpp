class Solution {
public:
    long maximumSubarraySum(std::vector<int>& nums, int k) {
        int n = nums.size();
        vector<long> prefixSum(n + 1);
        for (int i = 1; i <= n; i++) {
            prefixSum[i] = nums[i - 1] + prefixSum[i - 1];
        }
        unordered_map<int, int> index;
        long maxSum = 0;
        for (int e = 1, s = 0; e <= nums.size(); e++) {
            s = max(s, max(e - k, index[nums[e - 1]]));
            if (e - s == k) {
                maxSum = max(maxSum, prefixSum[e] - prefixSum[s]);
            }
            index[nums[e - 1]] = e;
        }
        return maxSum;
    }
};