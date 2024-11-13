class Solution {
public:
    // long long countFairPairs(vector<int>& nums, int lower, int upper) {
    //     int n = nums.size();
    //     sort(nums.begin(),nums.end());
    //     long long ans=0;
    //     // for(int i=0;i<n-1;i++){
    //     //     for(int j=n-1;j>i;j--){
    //     //         if(nums[j]+nums[i]>upper){
    //     //             continue;
    //     //         }
    //     //         else if(nums[i]+nums[j]<lower){
    //     //             break;
    //     //         }
    //     //         else{
    //     //             ans++;
    //     //         }
    //     //     }
    //     // }
    //     int start=0,end=n-1;
    //     while(start<end){
    //         if(nums[start]+nums[end]<lower) start++;
    //         else if(nums[start]+nums[end]>upper) end--;
    //         else{
    //             ans++;
    //             int temp = end;
    //             end--;
    //             while(start<end){
    //                 if(nums[start]+nums[end]<lower){
    //                     break;
    //                 }
    //                 else{
    //                     ans++;
    //                     end--;
    //                 }
    //             }
    //             start++;
    //             end = temp;
    //         }
    //     }
    //     return ans;
    // }



    int upperBound(vector<int>& nums, int target, int i) {
        int s = i+1;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e) {
            int m = (s+e)/2;
            if(nums[m] <= target) {
                ans = m;
                s = m+1;
            }
            else e = m-1;
        }
        return ans;
    }
    int lowerBound(vector<int>& nums, int target, int i) {
        int s = i+1;
        int e = nums.size()-1;
        int ans = -1;
        while(s<=e) {
            int m = (s+e)/2;
            if(nums[m] >= target) {
                ans = m;
                e = m-1;
            }
            else s = m+1;
        }
        return ans;
    }
    long long countFairPairs(vector<int>& temp, int lower, int upper) {
        long long ans = 0;
        sort(temp.begin(), temp.end());
        for(int i=0; i<temp.size(); i++) {
            int low = lower-temp[i];
            int up = upper-temp[i];
            int s = lowerBound(temp,low,i);
            int e = upperBound(temp,up,i);
            if(s != -1 && e != -1)
                ans += (e-s+1);
        }
        return ans;
    }
};