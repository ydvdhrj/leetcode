class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        
        int longest=0;
        for(int i:s){
            if(s.find(i-1)==s.end()){
                int length=1;
                int next = i+1;
                while(s.find(next)!=s.end()){
                    length++;
                    next++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};