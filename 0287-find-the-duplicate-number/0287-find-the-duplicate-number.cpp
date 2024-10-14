class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // int ans=0;
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1]){
        //         ans = nums[i];
        //         break;
        //     }
        // }
        // return ans;

        // optimal approach
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};