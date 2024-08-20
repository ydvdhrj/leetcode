class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> it;
        for(int i:nums){
            it[i]++;
        }
        bool ans = false;
        for(auto i:it){
            if(i.second>=2){
                ans = true;
                break;
            }
        }
        return ans;
    }
};