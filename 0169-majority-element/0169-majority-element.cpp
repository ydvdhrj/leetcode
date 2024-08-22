class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        int max=0,ans=0;
        for(auto it:m){
            if(it.second>max){
                ans=it.first;
                max = it.second;
            } 
        }
        return ans;
    }
};