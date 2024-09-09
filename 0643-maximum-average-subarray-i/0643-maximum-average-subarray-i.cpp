class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum = 0;
        for(int i=0;i<k;i++){
            max_sum+=nums[i];
        }
        double avg = max_sum;
        for(int i=k;i<nums.size();i++){
            avg += nums[i] - nums[i-k];
            max_sum = max(max_sum,avg);

        }
        return max_sum/k;
    }
};