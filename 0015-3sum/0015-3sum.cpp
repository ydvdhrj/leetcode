class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // int target = 0;
        // sort(nums.begin(),nums.end());
        // set<vector<int>> s;
        // vector<vector<int>> ans;
        // for(int i=0;i<nums.size();i++){
        //         int j=i+1;
        //         int k=nums.size()-1;
        //         while(j<k){
        //             int sum=nums[i]+nums[j]+nums[k];
        //         if(sum==target){
        //             s.insert({nums[i],nums[j],nums[k]});
        //             j++;
        //             k--;
        //         }
        //         else if(sum < target){
        //             j++;
        //         }
        //         else{
        //             k--;
        //         }
        //         }
        //     }

        // for(auto triplets:s){
        //     ans.push_back(triplets);
        // }
        // return ans;



        //another way
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            
            int k=nums.size()-1;
            int j=i+1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    j++;
                    k--; 
                    if(nums[j]==nums[j-1]) j++;
                    if(nums[k]==nums[k+1]) k--;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
            // int t = nums[i];
            while(nums[i]==nums[i+1] && i<nums.size()-3) i++;


        }
        // sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};