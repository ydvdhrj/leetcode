class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //by using hash map
        
        // unordered_map<int,int> m;
        // for(int i:nums){
        //     m[i]++;
        // }
        // int max=0,ans=0;
        // for(auto it:m){
        //     if(it.second>max){
        //         ans=it.first;
        //         max = it.second;
        //     } 
        // }
        // return ans;


        //another way
        int ele = -1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0) ele = nums[i];
            if(nums[i]==ele) count++;
            else{
                count--;
            }
        }
        return ele;
    }
};