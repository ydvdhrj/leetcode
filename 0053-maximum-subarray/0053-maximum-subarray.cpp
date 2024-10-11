class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute force approach
        // int max_sum = INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //         int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         // for(int k=i;k<=j;k++){
        //             sum+=nums[j];
        //         // }
        //         max_sum = max(max_sum,sum);
        //     }
        // }


        // optimal approach
        int max_sum=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            max_sum=max(sum,max_sum);
            if(sum<0){
                sum=0;
            }
        }
        // return sum
       
        return max_sum;
    }
};