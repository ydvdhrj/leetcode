class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector <int> nums2;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     nums2.push_back(pow(nums[i],2));
        // }
        // sort(nums2.begin(),nums2.end());
        // return nums2;


        //another effecient way
        vector<int> ans(nums.size());
        int left=0,right=nums.size()-1;
        int index = nums.size()-1;
        while(left<=right){
            if(abs(nums[left])>=abs(nums[right])){
                ans[index--]=nums[left]*nums[left];
                left++;
            }
            else{
                ans[index--] = nums[right]*nums[right];
                right--;
            }
        }
        return ans;
    }
};