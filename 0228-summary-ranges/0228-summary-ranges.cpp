class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<string> ans;
        string s1 = to_string(nums[0]);
        // s1+="->";
        int count=0;
        for(int i=1;i<nums.size();i++){
            count++;
            if(nums[i] != nums[i-1]+1){
                if(count!=1){
                s1+="->";
                s1+=to_string(nums[i-1]);
                }
                count=0;
                ans.push_back(s1);
                s1=to_string(nums[i]);
            }
        }
        if(count==0){
            ans.push_back(s1);
        }
        else if(count!=0){
            s1+="->";
            s1+=to_string(nums[nums.size()-1]);
            ans.push_back(s1);
        }
        return ans;
    }
};